#include <iostream>
#include <string>

int main()
{
    int i =0;
    while(i < 10)
    {
        std::cout << i << std::endl;
        i++;
    }

    std::cout << std::endl;
    std::cout << std::string(80, '-') << std::endl;
    std::cout << std::endl;

    for(int i=10; i>-6; i--)
    {
        std::cout << i << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::string(80, '-') << std::endl;
    std::cout << std::endl;

    int product = 1;
    for(int i=1; i<10; i++)
    {
        product *= i;
    }
    std::cout << "Product: " << product << std::endl;
}
