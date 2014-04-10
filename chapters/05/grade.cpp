#include <stdexcept>
#include <vector>
#include "grade.h"
#include "Student_info.h"


// comput a student's overall grade from midterm, homework, and final grades
double grade(double midterm, double fin, double homework)
{
    //std::cout << "Midterm: " << midterm << std::endl; 
    //std::cout << "Final: " << fin << std::endl; 
    //std::cout << "Homework: " << homework << std::endl; 
    return 0.2 * midterm + 0.4 * fin + 0.4 * homework;
}

// Determine if a student failed or not.
bool failed(const Student_info& s)
{
    return s.grade < 60;
}
