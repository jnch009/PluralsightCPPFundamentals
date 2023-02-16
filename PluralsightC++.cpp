#include <iostream>
#include <string>

int main()
{
    std::cout << "What is your name?" << std::endl;
    std::string name;
    std::getline(std::cin, name);
    std::cout << name << " is a lovely name, Welcome!" << std::endl;

    return 0;
}