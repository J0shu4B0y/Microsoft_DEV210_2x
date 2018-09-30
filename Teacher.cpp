#include "Teacher.h"

void Teacher::OutputIdentity() {
    std::cout << "I am a teacher" << std::endl;
}

void Teacher::OutputAge() {
    Teacher::OutputIdentity();
    Person::OutputAge();
}
