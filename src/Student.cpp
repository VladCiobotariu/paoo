#include "Student.h"
#include <cstring>
#include <utility>

Student::Student(int studentId, const char* studentName, float studentGrade)
    : id(studentId), grade(studentGrade) {
    // auto deleter = [](char* ptr) { delete[] ptr; };
    name = std::shared_ptr<char[]>(new char[std::strlen(studentName) + 1], std::default_delete<char[]>());
    std::strcpy(name.get(), studentName);
    std::cout << "constructor" << std::endl;
}

int Student::getId() const {
    return id;
}

const char* Student::getName() const {
    return name ? name.get() : nullptr;
}

float Student::getGrade() const {
    return grade;
}

void Student::setId(int newId) {
    id = newId;
}

void Student::setName(const char* newName) {
    // auto deleter = [](char* ptr) { delete[] ptr; };
    name = std::shared_ptr<char[]>(new char[std::strlen(newName) + 1], std::default_delete<char[]>());
    std::strcpy(name.get(), newName);
}

void Student::setGrade(float newGrade) {
    grade = newGrade;
}

void Student::display() const {
    if (name) {
        std::cout << "id: " << id << ", name: " << name.get() << ", grade: " << grade << std::endl;
    } else {
        std::cout << "id: " << id << ", name is null, grade: " << grade << std::endl;
    }
}