#include "Student.h"
#include <cstring>

Student::Student(int studentId, const char* studentName, float studentGrade)
    : id(studentId), grade(studentGrade) {
    name = new char[std::strlen(studentName) + 1];
    std::strcpy(name, studentName);
    std::cout << "constructor" << std::endl;
}

Student::~Student() {
    delete[] name;
    std::cout << "deconstructor" << std::endl;
}

// const Student& other -> copy
// Student&& other -> move

Student::Student(const Student& other)
    : id(0), name(nullptr), grade(0.0) {
    init(other);
    std::cout << "copy constructor" << std::endl;
}

Student::Student(Student&& other) noexcept
    : id(other.id), grade(other.grade), name(other.name) {
    other.name = nullptr;
    std::cout << "move constructor" << std::endl;
}

void Student::init(const Student& other) {
    id = other.id;         
    grade = other.grade;   

    if (other.name) {
        name = new char[std::strlen(other.name) + 1];
        std::strcpy(name, other.name);
    } else {
        name = nullptr;
    }
}

void Student::swap(Student& other) noexcept {
    std::swap(id, other.id);
    std::swap(name, other.name);
    std::swap(grade, other.grade);
}

Student& Student::operator=(Student rhs) {
    swap(rhs);
    std::cout << "assignment operator" << std::endl;
    return *this;
}

int Student::getId() const {
    return id;
}

const char* Student::getName() const {
    return name;
}

float Student::getGrade() const {
    return grade;
}

void Student::setId(int newId) {
    id = newId;
}

void Student::setName(const char* newName) {
    delete[] name;
    name = new char[std::strlen(newName) + 1];
    std::strcpy(name, newName);
}

void Student::setGrade(float newGrade) {
    grade = newGrade;
}

void Student::display() const {
    if (name) {
        std::cout << "id: " << id << ", name: " << name << ", grade: " << grade << std::endl;
    } else {
        std::cout << "id: " << id << ", name is null, grade: " << grade << std::endl;
    }
}