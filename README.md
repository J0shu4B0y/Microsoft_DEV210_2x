# Lab Instructions

## For this assignment:

* Create a Person base class with common attributes for a person (first_name, last_name, age, race, phone, as examples)
* Make the age variable private
* Make the phone variable protected
* In the Person class, create a pure virtual function called OutputIdentity() that accepts no parameters and returns void
* Also in the Person class, implement a virtual function called OutputAge() that displays "I am X years old", where X is the value of the Person's age attribute
* Create a Student and a Teacher class that each inherit from the Person base class using public inheritance
* In your main.cpp file, instantiate an Student object and initialize the member variables with valid data
* Override the Student's OutputIdentity() pure virtual method to display the text "I am a student" to the console
* Override the Student's OutputAge() virtual method to display the text "I am a student" and then calls the Person class's OutputAge() method
* Instantiate a Teacher object in main.cpp and assign valid data to the member variables
* Override the Teacher's OutputIdentity pure virtual method to display the text "I am a teacher" to the console
* Override the Teacher's OutputAge() virtual method to display the text "I am a teacher" and then calls the Person class's OutputAge() method
