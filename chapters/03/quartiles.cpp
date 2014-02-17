#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::cout << "Etner a series of integers and then end-of-file: " << std::endl;

    std::vector<double> nums;

    int x;
    while(std::cin >> x)
    {
        nums.push_back(x);
    }

    typedef std::vector<double>::size_type vec_sz;
    vec_sz size = nums.size();

    std::sort(nums.begin(), nums.end());

    double q1;
    double q2;
    double q3;

    if((size/2) % 2 == 1)
    {
        int jump = size/4;
        q1 = nums[jump];
        q3 = nums[size - (jump+1)];
    }
    else
    {
        int jump = size/4;
        q1 = (nums[jump] + nums[jump-1]) / 2;
        q3 = (nums[size - (jump+1)] + nums[size - jump]) / 2;
    }

    if(size%2 == 1)
    {
        q2 = nums[size/2];
    }
    else
    {
        q2 = (nums[size/2] + nums[size/2 -1]) / 2;
    }

    std::cout << "Q1: " << q1 << std::endl;
    std::cout << "Q2: " << q2 << std::endl;
    std::cout << "Q3: " << q3 << std::endl;
}
