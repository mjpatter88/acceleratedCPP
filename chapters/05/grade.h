#ifndef GUARD_grade_h
#define GUARD_grade_h

#include <vector>
#include "Student_info.h"

double grade(const Student_info& s);
double grade(double midterm, double fin, double homework);
double grade(double midterm, double fin, const std::vector<double>& hw);
bool failed(const Student_info& s);

#endif
