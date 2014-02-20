#include "Student_info.h"

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
