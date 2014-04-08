#include <iostream>
#include <vector>

#define MAX_VAL 10000000

int main(int argc, char* argv[])
{
    std::vector<int> vec;
    for(int i=0; i<MAX_VAL; i++)
    {
        vec.push_back(i);
    }
    std::cout << "Size of vec: " << vec.size() << std::endl;

    for(int i=0; i<MAX_VAL; i++)
    {
        vec.pop_back();
    }
    std::cout << "Size of vec: " << vec.size() << std::endl;
    return 0;
}
