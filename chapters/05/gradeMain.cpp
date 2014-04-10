#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <stdexcept>
#include "Student_info.h"
#include "grade.h"

std::vector<Student_info> extract_failed(std::vector<Student_info>& students);

int main()
{
    std::vector<Student_info> students;
    Student_info record;
    std::string::size_type maxlen = 0;

    try
    {
        //grading happens as part of the reading process
        while(read(std::cin, record))
        {
            maxlen = std::max(maxlen, record.name.size());
            students.push_back(record);
        }
    }
    catch(std::domain_error e)
    {
        std::cout << e.what();
    }

    extract_failed(students);
    //put the students in alphabetical order
    std::sort(students.begin(), students.end(), cmp);

    for(std::vector<Student_info>::size_type i=0; i!=students.size(); ++i)
    {
        std::cout << students[i].name << std::string(maxlen + 1 - students[i].name.size(), ' ');

        std::streamsize prec = std::cout.precision();
        std::cout << std::setprecision(3);
        std::cout << students[i].grade;
        std::cout << std::setprecision(prec) << std::endl;
    }

    return 0;
}

std::vector<Student_info> extract_failed(std::vector<Student_info>& students)
{
    std::vector<Student_info> fail;
    std::vector<Student_info>::iterator iter = students.begin();
    
    while(iter != students.end())
    {
        if(failed(*iter))
        {
            fail.push_back(*iter);
            iter = students.erase(iter);
        }
        else
        {
            ++iter;    //only increment if we didn't erase an element
        }
    }
    return fail;
}

/*
 * Old version, pre-iterator
std::vector<Student_info> extract_failed(std::vector<Student_info>& students)
{
    std::vector<Student_info> fail;
    std::vector<Student_info>::size_type i = 0;
    
    while(i!=students.size())
    {
        if(failed(students[i]))
        {
            fail.push_back(students[i]);
            students.erase(students.begin()+i);
        }
        else
        {
            ++i;    //only increment if we didn't erase an element
        }
    }
    return fail;
}*/
