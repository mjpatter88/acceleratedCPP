#include <algorithm>
#include <iostream>
#include <iomanip>

#define MAX_VAL 1000

int numDigits(int x);
int square(int x);

int main()
{
    int width = numDigits(MAX_VAL);
    int width2 = width*2 - 1;

    std::cout << "Width1: " << width << " Width2: " << width2 << std::endl;

    for(int i=0; i<MAX_VAL+1; i++)
    {
        std::cout << std::setw(width) << i << "\t";
        std::cout << std::setw(width2) << square(i) << std::endl;
    }
    return 0;
}

int square(int x)
{
    return x*x;
}

int numDigits(int x)
{
    //There is likely a better way to do this...
    int digits = 0;
    int num = x;
    
    if(num == 0) //only special case is when x is 0 to start.
    {
        return 1;
    }
    while(num > 0)
    {
        num = num/10;
        digits++;
    }
    return digits;
}
