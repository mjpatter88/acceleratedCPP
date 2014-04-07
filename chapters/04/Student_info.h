#ifndef GUARD_Student_info
#define GUARD_Student_info

#include <iostream>
#include <string>
#include <vector>

struct Student_info
{
    std::string name;
    double midterm;
    double fin;
    std::vector<double> homework;
};

struct Student_info_inc
{
    std::string name;
    double grade;
};

std::istream& read(std::istream& is, Student_info& s);
std::istream& read_hw(std::istream& in, std::vector<double>& hw);
bool cmp(const Student_info&, const Student_info&);
bool cmp_inc(const Student_info_inc&, const Student_info_inc&);
std::istream& read(std::istream& is, Student_info_inc& s);

#endif
