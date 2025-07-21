/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:10:20 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/20 18:21:37 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
   std::cout << "Normal Tests:\n\n";
    {
        const Animal* meta = new Animal();
        const Animal* dog = new Dog();
        const Animal* cat = new Cat();

        std::cout << "\nTypes:\n";
        std::cout << "meta->getType(): " <<meta->getType() << "\n";
        std::cout << "cat->getType(): " << cat->getType() << "\n";
        std::cout << "dog->getType(): " << dog->getType() << "\n\n";
        

        std::cout << "Sounds:\n";
        std::cout << "meta->makeSound(): ";
        meta->makeSound();
        std::cout << "cat->makeSound(): ";
        cat->makeSound();
        std::cout << "dog->makeSound(): ";
        dog->makeSound();
        std::cout << std::endl;
        
        delete(meta);
        delete(dog);
        delete(cat);
    }
    // wrong stuff
    std::cout << "\nWrongCat Test:\n\n";
    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* Wrongcat = new WrongCat();

        std::cout << "\nTypes:\n";
        std::cout << "meta->getType(): " << meta->getType() << "\n";
        std::cout << "Wrongcat->getType(): " << Wrongcat->getType() << "\n\n";

        std::cout << "Sounds:\n";
        std::cout << "meta->makeSound(): ";
        meta->makeSound();
        std::cout << "cat->makeSound(): ";
        Wrongcat->makeSound();
        std::cout << std::endl;

        delete(meta);
        delete(Wrongcat);
    }

    
    return 0;
}