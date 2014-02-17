#include <iostream>
#include <string>
#include <vector>

int findWord(std::vector<std::string> words, std::string toFind);
void printLongestAndShortest(std::vector<std::string> words);

int main()
{
    // Parallel vectors of each word and corresponding count.
    // I would use a class or a pair, but I'm trying to follow along with the book.
    std::vector<std::string> words;
    std::vector<int> count;

    std::cout << "Please enter words followed by end-of-file." << std::endl;

    std::string x;

    while(std::cin >> x)
    {
        //I know there are functions to do this, but I'm going to write my own for practice.
        int index = findWord(words, x);
        if(index == -1)
        {
            words.push_back(x);
            count.push_back(1);
        }
        else
        {
            count[index]++;
        }
    }

    for(int i=0; i<words.size(); i++)
    {
        std::cout << words[i] << ": " << count[i] << std::endl;
    }

    printLongestAndShortest(words);
    return 0;
}

int findWord(std::vector<std::string> words, std::string toFind)
{
    int size = words.size();
    for(int i=0; i<size; i++)
    {
        if(words[i].compare(toFind) == 0)
        {
            return i;
        }
    }
    return -1;
}

void printLongestAndShortest(std::vector<std::string> words)
{
    int size = words.size();
    int longest = 0;
    int longestIndex = 0; 
    int shortest = 0;
    int shortestIndex = 0;
    for(int i=0; i<size; i++)
    {
        if(words[i].size() > longest)
        {
            longest = words[i].size();
            longestIndex = i;
        }
        if(words[i].size() < shortest || shortest == 0) //A word can't have zero length.
        {
            shortest = words[i].size();
            shortestIndex = i;
        }
    }
    std::cout << "Longest word: " << words[longestIndex] << std::endl;
    std::cout << "Shortest word: " << words[shortestIndex] << std::endl;
}

