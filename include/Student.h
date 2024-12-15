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

public:
    Student(int studentId, const char* studentName, float studentGrade);

    ~Student() = default;

    Student(const Student& other) = default;
    Student(Student&& other) noexcept = default;

    Student& operator=(const Student& other) = default;
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