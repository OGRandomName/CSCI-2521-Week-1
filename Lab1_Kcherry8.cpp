/**
* @file Lab1_username.cpp
* @author Kenneth Cherry
* @date 2026-09-05
* @brief A simple program to greet the user by name.
*/

#include <iostream>
#include <string>

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::string firstName;
    std::string lastName;

    std::cout << "Enter your first name: ";
    std::cin >> firstName;

    std::cout << "Enter your last name: ";
    std::cin >> lastName;

    std::cout << "Welcome to C++ Programming, " << firstName << " " << lastName << "!" << std::endl;

    return 0;
}
