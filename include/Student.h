#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
private:
    int id;
    char* name;
    float grade;

public:
    Student(int studentId, const char* studentName, float studentGrade);

    ~Student();

    Student(const Student& other);

    Student(Student&& other) noexcept;

    int getId() const;
    const char* getName() const;
    float getGrade() const;

    void setId(int newId);
    void setName(const char* newName);
    void setGrade(float newGrade);

    void display() const;
};

#endif