#include <iostream>
#include <string>
#include <vector>

int main()
{
    //we'll accept 5 scores per student
    const int NUM_SCORES = 5;

    std::vector<std::string> names;
    std::vector<double> scores;
    std::cout << "Enter student names followed by an end-of-file." << std::endl;

    std::string inp;
    while(std::cin >> inp)
    {
        names.push_back(inp);
    }
    std::cin.clear();

    for(int i=0; i<names.size(); i++)
    {
        std::cout << "Enter " << NUM_SCORES << " scores for " << names[i] << ": " << std::endl;
        double inp2;
        for(int j=0; j<NUM_SCORES; j++)
        {
            std::cin >> inp2;
            scores.push_back(inp2);
        }
        std::cin.clear();
    }


    //Output the names and averages
    for(int i=0; i<names.size(); i++)
    {
        std::cout << "Average for " << names[i] << ": ";
        double avg = 0;
        for(int j=0; j<NUM_SCORES; j++)
        {
           avg += scores[NUM_SCORES*i + j]; 
        }
        avg = avg/NUM_SCORES;
        std::cout << avg << std::endl; 
    }

}
