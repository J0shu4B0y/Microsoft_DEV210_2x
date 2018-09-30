#ifndef MICROSOFT_DEV210_2X_PERSON_H
#define MICROSOFT_DEV210_2X_PERSON_H

#include <iostream>
#include <string>

class Person {
public:
    std::string first_name;
    std::string last_name;
    std::string race;

private:
    int age;

protected:
    int phone;

public:
    virtual void OutputIdentity() = 0;

    virtual void OutputAge();
};


#endif //MICROSOFT_DEV210_2X_PERSON_H
