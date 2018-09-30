#include <iostream>
#include "Student.h"
#include "Teacher.h"

int main() {
    Student student;

    student.first_name = "Alex";
    student.last_name = "Newman";

    student.OutputAge();

    Teacher teacher;
    teacher.first_name = "Mariya";
    teacher.last_name = "Beshtanova";

    teacher.OutputAge();

    return 0;
}
