#include "Student.h"

int main() {
    Student student1(1, "Vlad Ciobotariu", 9.2);
    student1.display();

    Student student2 = student1;
    student2.display();

    Student student3 = std::move(student1);
    student3.display();

    student1.display();

    student2.setName("Marcel Ciolacu");
    student2.setGrade(8.7);
    student2.display();

    Student student4(4, "Student1", 7.5);
    student4 = student2;
    student4.display();

    Student student5(5, "Student2", 6.5);
    student5 = std::move(student2);
    student5.display();

    return 0;
}