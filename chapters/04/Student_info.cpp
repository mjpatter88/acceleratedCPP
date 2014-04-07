#include "Student_info.h"
#include "grade.h"

std::istream& read(std::istream& is, Student_info& s)
{
    is >> s.name >> s.midterm >> s.fin;

    read_hw(is, s.homework);
    return is;
}

std::istream& read_hw(std::istream& in, std::vector<double>& hw)
{
    if(in)
    {
        hw.clear(); //get rid of old grades.

        double x;
        while(in >> x)
        {
            hw.push_back(x);
        }

        in.clear(); //clear input stream so it works for future input
    }
    return in;
}

bool cmp(const Student_info& x, const Student_info& y)
{
    return x.name > y.name;
}

bool cmp_inc(const Student_info_inc& x, const Student_info_inc& y)
{
    return x.name > y.name;
}

std::istream& read(std::istream& is, Student_info_inc& s)
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
