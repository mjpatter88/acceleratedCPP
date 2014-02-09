// ask for a person's name and greet the person
#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name: ";

    std::string name;
    std::cin >> name;

    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}
