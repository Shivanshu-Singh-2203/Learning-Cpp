#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setPersonInfo(string n, int a) {
        name = n;
        age = a;
    }

    virtual void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    virtual ~Person() {}
};

class Student : public Person {
protected:
    int rollNo;
    double marks;

public:
    void setStudentInfo(string n, int a, int r, double m) {
        setPersonInfo(n, a);
        rollNo = r;
        marks = m;
    }

    void displayDetails() override {
        Person::displayDetails();
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

class GraduateStudent : public Student {
private:
    string thesisTitle;

public:
    void setGraduateInfo(string n, int a, int r, double m, string thesis) {
        setStudentInfo(n, a, r, m);
        thesisTitle = thesis;
    }

    void displayDetails() override {
        Student::displayDetails();
        cout << "Thesis Title: " << thesisTitle << endl;
    }
};

int main() {
    GraduateStudent grad;

    string name, thesis;
    int age, roll;
    double marks;

    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Roll Number: ";
    cin >> roll;
    cout << "Enter Marks: ";
    cin >> marks;
    cin.ignore();
    cout << "Enter Thesis Title: ";
    getline(cin, thesis);

    grad.setGraduateInfo(name, age, roll, marks, thesis);

    Person* p = &grad;

    cout << "\nGraduate Student Details:\n";
    p->displayDetails();

    return 0;
}

