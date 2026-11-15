
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student
{
private:
    string name;
    int studentNumber;
    double average;

public:
    Student();

    void setName(string n);
    string getName();

    void setStudentNumber(int number);
    int getStudentNumber();

    void setAverage(double avg);
    double getAverage();
};

#endif // STUDENT_H

