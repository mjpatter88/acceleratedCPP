#include <iostream>
#include <string>

int main()
{
    int first;
    int second;

    std::cout << "Insert first number: ";
    std::cin >> first;
    std::cout << "Insert second number: ";
    std::cin >> second;

    if(first > second)
    {
        std::cout << "First is larger." << std::endl;
    }
    else if(second > first)
    {
        std::cout << "Second is larger." << std::endl;
    }
    else
    {
        std::cout << "They are equal." << std::endl;
    }

    return 0;
}
