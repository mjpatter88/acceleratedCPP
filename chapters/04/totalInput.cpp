#include <vector>
#include <iostream>
#include "readIntoVector.h"

int main()
{
    std::vector<std::string> vec;
    readInput(vec);
    std::cout << "Words entered: " << vec.size() << std::endl;
    return 0;
}
