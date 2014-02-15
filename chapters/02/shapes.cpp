#include <iostream>
#include <string>

int main()
{
    char c = '*';
    std::cout << std::endl;

    //print a square
    int width = 10; 
    int height = 5;
    for(int row=0; row<height; row++)
    {
        for(int col=0; col<width; col++)
        {
            if(row==0 || row==height-1 || col==0 || col==width-1)
            {
                std::cout << c;
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    //print a rectangle
    width = 20; 
    height = 5;
    for(int row=0; row<height; row++)
    {
        for(int col=0; col<width; col++)
        {
            if(row==0 || row==height-1 || col==0 || col==width-1)
            {
                std::cout << c;
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    //print a triangle (drew a picture in a grid then found numbers)
    width = 11;
    height = width/2 + 1; //(6)

    for(int row=0; row<height; row++)
    {
        for(int col=0; col<width; col++)
        {
            if(row==height-1 ||                             //Baseline
              (row==0 && col==width/2)||                    //Top point
              (col==width/2 + row || col==width/2 - row))   //Two sides
            {
                std::cout << c;
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

}
