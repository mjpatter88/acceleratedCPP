#include <iostream>
#include <string>

int main()
{
    std::string name;
    int padRows;
    int padCols;

    std::cout << "Please enter your first name: ";
    std::cin >> name;
    std::cout << "Row spacing: ";
    std::cin >> padRows;
    std::cout << "Column spacing: ";
    std::cin >> padCols;



    const std::string greeting = "Hello, " + name + "!";

    const int rows = padRows*2 + 3;
    const std::string::size_type cols = greeting.size() + padCols*2 + 2;

    std::cout << std::endl;

    int r=0;
    while(r!= rows)
    {
        std::string::size_type c = 0;
        while(c != cols)
        {
            if(r == 0 || r == rows-1 || c == 0 || c == cols-1)
            {
                std::cout << "*";
                ++c;
            }
            else if(r == padRows+1 && c == padCols+1)
            {
                std::cout << greeting;
                c += greeting.size();
            }
            else
            {
                std::cout << std::string(padCols, ' ');
                c += padCols;
            }
        }
        ++r;
        std::cout << std::endl;
    }


    return 0;
}
