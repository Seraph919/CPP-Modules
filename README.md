# 42 / 1337 - C++ Modules (CPP00 - CPP09)

Implementation of the 42 Network C++ curriculum (C++98 standard).

## General Rules
* **Compiler:** `c++`
* **Flags:** `-Wall -Wextra -Werror -std=c++98`
* **Style:** Orthodox Canonical Form (Default constructor, Copy constructor, Copy assignment operator, Destructor) starting from CPP02.
* **Prohibited:** C-style casts, external libraries, `printf`/`malloc`/`free`, and features introduced after C++98 (e.g., `auto`, lambdas, smart pointers).

## Directory Structure
* `CPP00/`: Namespaces, classes, member functions, stdio streams.
* `CPP01/`: Memory allocation, references, pointers to members.
* `CPP02/`: Fixed-point numbers, operator overloading, canonical form.
* `CPP03/`: Single and multiple inheritance.
* `CPP04/`: Subtype polymorphism, abstract classes, interfaces.
* `CPP05/`: Custom exceptions and hierarchical execution.
* `CPP06/`: Scalar conversion and standard C++ casts.
* `CPP07/`: Function and class templates.
* `CPP08/`: Standard Template Library (containers, iterators, algorithms).
* `CPP09/`: STL data structures in practical algorithmic problems.

## Compilation
Each exercise contains its own `Makefile`. To build and run:
```sh
cd CPP00/ex01
make
./phonebook
