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
    std::cout << "destructor" << std::endl;
}

void Student::display() const {
    std::cout << "id: " << id << ", name: " << (name ? name : "null") << ", grade: " << grade << std::endl;
}