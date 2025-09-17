#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n = "", int a = 0) : name(n), age(a) {}

    void showPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : virtual public Person {
protected:
    int empID;

public:
    Employee(int id = 0) : empID(id) {}  

    void showEmployee() {
        showPerson();
        cout << "Employee ID: " << empID << endl;
    }
};

class Manager : virtual public Employee {
protected:
    int teamSize;

public:
    Manager(int size = 0) : teamSize(size) {}  

    void showManager() {
        showEmployee();
        cout << "Team Size: " << teamSize << endl;
    	cout << "Designation : " << "Manager" << endl;
	}
};

class Engineer : virtual public Employee {
protected:
    string specialization;

public:
    Engineer(string spec = "") : specialization(spec) {}

    void showEngineer() {
        showEmployee();
	cout << "Specialization: " << specialization << endl;
    }
};

class LeadEngineer : public Manager, public Engineer {
public:
    LeadEngineer(string n, int a, int id, int size, string spec)
        : Person(n, a), Employee(id), Manager(size), Engineer(spec) {}

    void showLeadEngineer() {
        showEmployee();
        cout << "Team Size: " << teamSize << endl;
        cout << "Specialization: " << specialization << endl;
    }
};

int main() {
    LeadEngineer lead("Alice", 30, 101, 5, "Software");

    cout << "Lead Engineer Details:" << endl;
    lead.showLeadEngineer();

    return 0;
}

