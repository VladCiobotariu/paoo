#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
private:
    int id = 0;
    char* name = NULL;
    float grade = 0.0;

    void init(const Student& other);

public:
    Student(int studentId, const char* studentName, float studentGrade);

    ~Student();

    Student(const Student& other);

    Student(Student&& other) noexcept;

    Student& operator=(Student rhs); 
    void swap(Student& other) noexcept; 

    int getId() const;
    const char* getName() const;
    float getGrade() const;

    void setId(int newId);
    void setName(const char* newName);
    void setGrade(float newGrade);

    void display() const;
};

#endif