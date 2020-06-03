#include <iostream>
#include <string>
#include <string.h>

int main()
{
    /*std::string firstName;
    std::string lastName;
    std::cout << "Please input your first name: ";
    std::cin >> firstName;
    if (firstName.size() > 2)
    {
        std::cout << '\n';
        std::cout << "Please input your last name: ";
    }
    else
    {
        std::cerr << "The first name should be greater than 2" << std::endl;
        return -1;
    }

    std::cin >> lastName;
    if (lastName.size() > 2){
        std::cout << '\n';
        std::cout << "Hello, " << firstName << ' ' << lastName << " ... and goodbye!" << std::endl;
    }
    else
    {
        std::cerr << "The last name should be greater than 2" << std::endl;
        return -1;
    }*/

    char firstName[20] = {0};
    char lastName[20] = {0};

    std::cout << "Please input your first name: ";
    gets(firstName);
    if (strlen(firstName) > 2)
    {
        std::cout << '\n';
        std::cout << "Please input your last name: ";
    }
    else
    {
        std::cerr << "The first name should be greater than 2" << std::endl;
        return -1;
    }

    gets(lastName);
    if (strlen(lastName) > 2)
    {
        std::cout << '\n';
        std::cout << "Hello, " << firstName << ' ' << lastName << " ... and goodbye!" << std::endl;
    }
    else
    {
        std::cerr << "The last name should be greater than 2" << std::endl;
        return -1;
    }
    return 0;
}
