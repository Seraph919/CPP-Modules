# C++ Module 05: Repetition and Exceptions

This module focuses on advanced C++ concepts, including exception handling, abstract classes, and ensuring robust class design through the Orthodox Canonical Form (OCF). The exercises build upon each other to create a simulation of a bureaucratic system with `Bureaucrats`, `Forms`, and `Interns`.

## Core Concepts

### 1. Orthodox Canonical Form (OCF)
All classes (except for exceptions) are required to be in OCF, which means they must have:
- A default constructor.
- A copy constructor.
- A copy assignment operator (`operator=`).
- A destructor.

**Common Issue & Solution**: A common challenge arises when a class contains `const` members. The copy assignment operator cannot reassign these members. In our implementation, the assignment operator only copies non-constant members (like the `Signed` status in `Form`), ensuring the `const` members remain unchanged after initialization.

### 2. Exception Handling
This module heavily relies on exceptions to handle errors and exceptional circumstances, such as invalid grades or permissions.

- **Custom Exceptions**: We created custom exception classes (e.g., `GradeTooHighException`, `GradeTooLowException`, `NotSignedException`) that inherit from `std::exception`. This allows us to throw specific, meaningful errors.
- **`try-catch` Blocks**: The core logic of our program is placed within `try` blocks. `catch` blocks are used to gracefully handle any exceptions that are thrown, preventing the program from crashing and allowing us to provide clear error messages.
- **Catching by Reference**: We always catch exceptions by `const` reference (e.g., `catch (const std::exception& e)`). This avoids unnecessary copying of the exception object and prevents object slicing if we were catching a base class by value.

### 3. Abstract Classes and Polymorphism
In `ex02`, the `Form` class is refactored into an abstract class `AForm` by introducing a pure virtual function: `virtual void execute(Bureaucrat const & executor) const = 0;`.

- **Interface**: `AForm` acts as an interface that defines a contract for all concrete form types.
- **Polymorphism**: This allows a `Bureaucrat` to `execute` any form through a base class pointer or reference (`AForm&`) without needing to know the specific concrete type (`ShrubberyCreationForm`, etc.). The correct `execute` function is called at runtime.

---

## Exercise Breakdown

### Exercise 00: Bureaucrat
- **Goal**: Implement the `Bureaucrat` class.
- **Key Features**:
  - A `const` name and a grade (1-150).
  - **Exception Logic**:
    - The constructor throws `GradeTooHighException` if the grade is `< 1` and `GradeTooLowException` if `> 150`.
    - `incrementGrade()` and `decrementGrade()` also throw these exceptions if the grade goes out of bounds.
- **Common Issue & Solution**:
  - **Buggy Constructor**: The initial implementation had a bug where the constructor checked an uninitialized `grade` member instead of the `Grade` parameter. This was fixed to validate the parameter before assigning it.
  - **Default Constructor**: The initial default constructor threw an exception. It was corrected to initialize the bureaucrat to a valid, default state (e.g., grade 150).

### Exercise 01: Form up, maggots!
- **Goal**: Implement the `Form` class and the interaction between a `Bureaucrat` and a `Form`.
- **Key Features**:
  - `Form` has a name, a boolean `signed` status, and two grades: one to sign and one to execute.
  - `Bureaucrat` gets a new method: `signForm(Form &form)`.
  - **Exception Logic**:
    - `Form`'s constructor validates its grades, throwing exceptions if they are out of the 1-150 range.
    - `Form::beSigned(Bureaucrat &b)` throws `GradeTooLowException` if the bureaucrat's grade is not high enough (i.e., `b.getGrade() > form.getGradeToSign()`).
    - `Bureaucrat::signForm()` does not throw exceptions itself. Instead, it calls `form.beSigned()` inside a `try` block and catches any potential exceptions, printing a user-friendly success or failure message.
- **Common Issue & Solution**:
  - **Incorrect `operator<<`**: The stream insertion operator was initially hardcoded to use `std::cout`. This was fixed to use the `std::ostream& os` parameter, making it more versatile.
  - **Re-signing a Form**: The `beSigned` method was updated to prevent a form from being signed if it is already signed.

### Exercise 02: No, you need form 28B, not 28C...
- **Goal**: Introduce an abstract base class `AForm` and create several concrete form types that perform actions.
- **Key Features**:
  - `AForm` is an abstract class with a pure virtual `execute()` method.
  - Three concrete classes inherit from `AForm`: `ShrubberyCreationForm`, `RobotomyRequestForm`, and `PresidentialPardonForm`.
  - `Bureaucrat` gets an `executeForm(AForm const &form)` method.
  - **Exception Logic**:
    - The `execute()` method in each concrete form first checks two conditions:
      1. If the form is not signed, it throws `AForm::NotSignedException`.
      2. If the executor's grade is too low, it throws `AForm::GradeTooLowException`.
    - `Bureaucrat::executeForm()` calls the form's `execute` method within a `try-catch` block, printing a message indicating success or failure based on any caught exceptions.
- **Common Issue & Solution**:
  - **Incomplete Copy Logic**: The copy constructors and assignment operators in the derived form classes initially only copied the `target` member. They were fixed to also invoke the base class's (`AForm`) copy logic to ensure the `signed` status is also copied.

### Exercise 03: At least this beats coffee-making
- **Goal**: Implement the `Intern` class, which acts as a factory for creating `AForm` objects.
- **Key Features**:
  - `Intern` has one method: `makeForm(formName, target)`.
  - This method must create the correct form type based on the `formName` string.
  - **No `if/else` Forest**: The subject forbids using a long chain of `if/else if/else` to determine which form to create.
- **Solution**:
  - To avoid an `if/else` chain, we used an array of function pointers.
  - An array of strings holds the valid form names (`"robotomy request"`, etc.).
  - A parallel array of function pointers holds the functions that create the corresponding forms (`new RobotomyRequestForm(...)`, etc.).
  - We loop through the names array. If a match is found, we call the function at the same index in the function pointers array.
  - If no match is found after the loop, an error is printed and `NULL` is returned.
- **Common Issue & Solution**:
  - **Memory Leaks**: The `makeForm` method allocates memory using `new`. The `README` highlights that the caller is responsible for `delete`ing the returned `AForm*` to prevent memory leaks. This is a critical aspect of using a factory pattern that returns raw pointers.
