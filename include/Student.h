#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
private:
    int id;
    char* name;
    float grade;

    Student() = delete;

    Student(const Student& other); // either private

public:
    Student(int studentId, const char* studentName, float studentGrade);

    Student(Student&& other) = delete; // or deleted can work

    ~Student();

    void display() const;
};

#endif