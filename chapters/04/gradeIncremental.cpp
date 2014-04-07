#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <stdexcept>
#include "Student_info.h"

int main()
{
    std::vector<Student_info_inc> students;
    Student_info_inc record;
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

    //put the students in alphabetical order
    std::sort(students.begin(), students.end(), cmp_inc);

    for(std::vector<Student_info_inc>::size_type i=0; i!=students.size(); ++i)
    {
        std::cout << students[i].name << std::string(maxlen + 1 - students[i].name.size(), ' ');

        std::streamsize prec = std::cout.precision();
        std::cout << std::setprecision(3) << students[i].grade << std::setprecision(prec) << std::endl;
    }

    return 0;
}
