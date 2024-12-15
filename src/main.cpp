#include "Student.h"

int main() {
    Student student1(1, "Vlad Ciobotariu", 9.2);
    student1.display();

    Student student3 = std::move(student1);
    student3.display();

    student1.display();

    return 0;
}