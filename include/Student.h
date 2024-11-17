#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
private:
    int id;
    float grade;

public:
    char* name;
    Student(int studentId, const char* studentName, float studentGrade);
    ~Student();

    void display() const;
};

#endif