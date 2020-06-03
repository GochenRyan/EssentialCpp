#include <iostream>
#include <string>

int main()
{
    std::string firstName;
    std::string lastName;
    std::cout << "Please input your first name: ";
    std::cin >> firstName;
    std::cout << '\n';
    std::cout << "Please input your last name: ";
    std::cin >> lastName;
    std::cout << '\n';
    std::cout << "Hello, " << firstName << ' ' << lastName << " ... and goodbye!" << std::endl;
    return 0;
}
