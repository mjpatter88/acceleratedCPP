#ifndef GUARD_Student_info
#define GUARD_Student_info

#include <iostream>
#include <string>
#include <vector>

struct Student_info
{
    std::string name;
    double grade;
};

bool cmp(const Student_info&, const Student_info&);
std::istream& read(std::istream& is, Student_info& s);

#endif
