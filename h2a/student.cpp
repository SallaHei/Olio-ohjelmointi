
#include "student.h"

Student::Student() {}

void Student::setName(string n)
{
    name = n;
}

string Student::getName()
{
    return name;
}

void Student::setStudentNumber(int number)
{
    studentNumber = number;
}

int Student::getStudentNumber()
{
    return studentNumber;
}

void Student::setAverage(double avg)
{
    average = avg;
}

double Student::getAverage()
{
    return average;
}
