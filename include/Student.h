#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <memory>
#include <string>

class Student {
private:
    int id = 0;
    std::shared_ptr<char[]> name;
    float grade = 0.0;

    Student(const Student& other);            
    Student& operator=(const Student& other);

public:
    Student(int studentId, const char* studentName, float studentGrade);

    ~Student() = default;

    Student(Student&& other) noexcept = default;
    Student& operator=(Student&& other) noexcept = default;

    int getId() const;
    const char* getName() const;
    float getGrade() const;

    void setId(int newId);
    void setName(const char* newName);
    void setGrade(float newGrade);

    void display() const;
};

#endif