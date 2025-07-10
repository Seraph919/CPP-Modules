/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:29:39 by asoudani          #+#    #+#             */
/*   Updated: 2025/07/01 18:06:49 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
    wanted result:
    $>./megaphone "shhhhh... I think the students are asleep..."
    SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
    $>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
    DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
    $>./megaphone
    * LOUD AND UNBEARABLE FEEDBACK NOISE *
    $>

    functions inside structs in C:
    typedef struct client_t client_t, *pno;
    struct client_t
    {
        pid_t pid;
        char password[TAM_MAX]; // -> 50 chars
        pno next;

        pno (*AddClient)(client_t *); 
    };

    pno client_t_AddClient(client_t *self) { // code ..}

    int main()
    {

        client_t client;
        client.AddClient = client_t_AddClient; // probably really done in some init fn

        //code ..

        client.AddClient(&client);

    }
*/


std::string ToUpper(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        str[i] = std::toupper(str[i]);
    return (str);
}

int main(int ac, char **av)
{
    if (ac == 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 0);
    for (int i = 1; i < ac; i++)
    {
        std::cout << ToUpper(av[i]) << std::endl;
    }
}
