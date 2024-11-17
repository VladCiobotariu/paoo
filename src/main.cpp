#include "Student.h"
#include <iostream>

int main() {
    // create student
    Student student1(1, "Vlad C", 9.2);
    student1.display();

    // fail at comile
    Student student2 = student1; //error

    Student student3 = std::move(student1); //erorr
    student3.display();

    return 0;
}