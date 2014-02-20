#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <stdexcept>


double grade(double midterm, double fin, double homework);
double grade(double midterm, double fin, const std::vector<double>& hw);
double median(std::vector<double> vec);
std::istream& read_hw(std::istream& in, std::vector<double>& hw);

int main()
{
    std::string name;
    double midterm;
    double fin;
    std::vector<double> homework;

    std::cout << "Please enter your first name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;

    std::cout << "Please enter your midterm and final exame grades: ";
    std::cin >> midterm >> fin;
    std::cout << "Midterm: " << midterm << " Final: " << fin << std::endl;

    std::cout << "Etner all your homework grades, followed by end-of-file: ";
    read_hw(std::cin, homework);
    for(int i=0; i<homework.size(); i++)
    {
        std::cout << homework[i] << std::endl;
    }


    try
    {
        double final_grade = grade(midterm, fin, homework);
        std::streamsize prec = std::cout.precision();
        std::cout <<  "Your final grade is " << std::setprecision(3)
                  << final_grade << std::setprecision(prec) << std::endl;
    }
    catch(std::domain_error)
    {
        std::cout << std::endl << "You must enter your grades. Please try again." << std::endl;
        return 1;
    }
    
    return 0;
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
