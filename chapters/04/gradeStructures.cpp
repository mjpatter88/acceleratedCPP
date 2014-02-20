#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <stdexcept>


struct Student_info
{
    std::string name;
    double midterm;
    double fin;
    std::vector<double> homework;
};

std::istream& read(std::istream& is, Student_info& s);
std::istream& read_hw(std::istream& in, std::vector<double>& hw);
double grade(const Student_info& s);
double grade(double midterm, double fin, double homework);
double grade(double midterm, double fin, const std::vector<double>& hw);
double median(std::vector<double> vec);
bool cmp(const Student_info&, const Student_info&);

int main()
{
    std::vector<Student_info> students;
    Student_info record;
    std::string::size_type maxlen = 0;

    while(read(std::cin, record))
    {
        maxlen = std::max(maxlen, record.name.size());
        students.push_back(record);
    }

    std::sort(students.begin(), students.end(), cmp);

    for(std::vector<Student_info>::size_type i=0; i!=students.size(); ++i)
    {
        std::cout << students[i].name << std::string(maxlen + 1 - students[i].name.size(), ' ');

        try
        {
            double final_grade = grade(students[i]);
            std::streamsize prec = std::cout.precision();
            std::cout << std::setprecision(3) << final_grade << std::setprecision(prec);
        }
        catch(std::domain_error e)
        {
            std::cout << e.wahat();
        }
    }
    return 0;
}



std::istream& read(std::istream& is, Student_info& s)
{
    is >> s.name >> s.midterm >> s.fin;

    read_hw(is, s.homework);
    return is;
}

double grade(const Student_info& s)
{
    return grade(s.midterm, s.fin, s.homework);
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


double median(std::vector<double> vec)
{
    typedef std::vector<double>::size_type vec_sz;

    vec_sz size = vec.size();
    if(size == 0)
    {
        throw std::domain_error("median of an empty vector");
    }

    std::sort(vec.begin(), vec.end());
    vec_sz mid = size/2;
    return size % 2 == 0 ? (vec[mid] + vec[mid-1])/2 : vec[mid];
}

bool cmp(const Student_info& x, const Student_info& y)
{
    return x.name > y.name;
}
