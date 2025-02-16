#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{

private:
    string name;
    int age;

public:
    Student(string n, int a);
    void setAge(int);
    void setName(string);
    string getName() const;
    int getAge() const;
    void printStudentInfo() const;
};

#endif // STUDENT_H
