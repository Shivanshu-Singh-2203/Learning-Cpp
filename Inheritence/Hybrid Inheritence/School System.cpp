#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    void showPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Teacher : virtual public Person {
public:
    string subject;
    void showTeacher() {
        cout << "Subject: " << subject << endl;
    }
};

class Student : virtual public Person {
public:
    int rollNo;
    void showStudent() {
        cout << "Roll No: " << rollNo << endl;
    }
};

class TA : public Teacher, public Student {
public:
    void showTA() {
        showPerson();
        showTeacher();
        showStudent();
    }
};

int main() {
    TA ta;
    ta.name = "Alice";
    ta.age = 22;
    ta.subject = "Math";
    ta.rollNo = 101;

    ta.showTA();
}

