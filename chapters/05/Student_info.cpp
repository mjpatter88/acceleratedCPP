#include "Student_info.h"
#include "grade.h"

bool cmp(const Student_info& x, const Student_info& y)
{
    return x.name > y.name;
}

std::istream& read(std::istream& is, Student_info& s)
{
    double midterm_grade = 0.0;
    double final_grade;
    double homework_grade;
    is >> s.name >> midterm_grade >> final_grade;

    int size=0;
    if(is)
    {
        double x;

        while(is >> x)
        {
            size++;
            homework_grade += x;
        }
        homework_grade = homework_grade / size;
        s.grade = grade(midterm_grade, final_grade, homework_grade);

        is.clear();
    }

    return is;
}
