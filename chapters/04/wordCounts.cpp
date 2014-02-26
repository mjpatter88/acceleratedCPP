#include <vector>
#include <iostream>
#include <map>
#include "readIntoVector.h"

int main()
{
    std::vector<std::string> vec;
    std::map<std::string, int> map;

    readInput(vec);
    std::cout << "Words entered: " << vec.size() << std::endl;

    //int size = vec.size();
    //for(int i=0; i<size; i++)
    std::vector<std::string>::iterator it;
    for(it=vec.begin(); it!=vec.end(); ++it)
    {
        if(map.count(*it) == 0)
        {
            map.insert(std::pair<std::string, int>(*it, 1));
        }
        else
        {
            //int oldCount = map[*it];
            //map[*it] = oldCount + 1;
            map[*it]++;
        }
    }

    std::map<std::string, int>::iterator it2;
    for(it2=map.begin(); it2!=map.end(); ++it2)
    {
        std::cout << it2->first << " = " << it2->second << std::endl;
    }

    return 0;
}
