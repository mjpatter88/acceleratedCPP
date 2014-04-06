#include <vector>
#include <iostream>

void readInput(std::vector<std::string>& vec)
{
    std::string inp;
    while(std::cin >> inp)
    {
        vec.push_back(inp);
    }
}

void readInput(std::vector<double>& vec)
{
    double inp;
    while(std::cin >> inp)
    {
        vec.push_back(inp);
    }
}
