#include <stdexcept>
#include <vector>
#include "grade.h"
#include "median.h"
#include "Student_info.h"


double grade(const Student_info& s)
{
    return grade(s.midterm, s.fin, s.homework);
}


// comput a student's overall grade from midterm, homework, and final grades
double grade(double midterm, double fin, double homework)
{
    std::cout << "Midterm: " << midterm << std::endl; 
    std::cout << "Final: " << fin << std::endl; 
    std::cout << "Homework: " << homework << std::endl; 
    return 0.2 * midterm + 0.4 * fin + 0.4 * homework;
}

// compute a student's overall grade from midterm, final, and a vector of hw grades
double grade(double midterm, double fin, const std::vector<double>& hw)
{
    if(hw.size() == 0)
    {
        throw std::domain_error("student has done no homework");
    }
    return grade(midterm, fin, median(hw));
}
