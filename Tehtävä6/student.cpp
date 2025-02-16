#include "student.h"

Student::Student(string n, int a) {}

void Student::setAge(int a)
{
    age = a;
}

void Student::setName(string n)
{
    name = n;
}

string Student::getName() const
{
    return name;
}

int Student::getAge() const
{
    return age;
}

void Student::printStudentInfo() const
{
    cout << "Nimi: " << name << endl;
    cout << "Ika: " << age << endl;
}



