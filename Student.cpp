#include "Student.h"

void Student::OutputIdentity() {
    std::cout << "I am a student" << std::endl;
}

void Student::OutputAge() {
    Student::OutputIdentity();
    Person::OutputAge();
}
