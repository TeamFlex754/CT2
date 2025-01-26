#include <iostream>

int main() {

    std::string firstName;
    std::string lastName;

    std::cout << "Enter your first name:\n";
    std::cin >> firstName;

    std::cout << "Enter your last name:\n";
    std::cin >> lastName;

    std::cout << "Hello, " << firstName <<" "<< lastName << "!" << std::endl;


    return 0;
}