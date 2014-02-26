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
