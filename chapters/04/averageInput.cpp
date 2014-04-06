#include <vector>
#include <iostream>
#include "readIntoVector.h"


int main(int argc, char* argv[])
{
    std::vector<double> vec;
    readInput(vec);

    std::vector<double>::size_type size = vec.size();
    std::cout << "Size of vector: " << size << std::endl;
    double sum = 0.0;

    for(std::vector<double>::size_type i=0; i<vec.size(); i++)
    {
        sum += vec[i];
    }

    double average = sum/size;
    std::cout << "Average: " << average << std::endl;

    return 0;
}
