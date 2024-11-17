#include "Student.h"
#include <iostream>

int main() {
    // create a student
    Student student1(1, "Vlad Ciobotariu", 9.2);
    student1.display();

    // copy constrcutor, auto generated
    Student student2 = student1;
    student2.display();

    // modify
    std::cout << "modify..." << std::endl;
    delete[] student2.name;
    student1.display();

    return 0;
}