/* Employee class */ 

#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;

public:
	void getPersonInfo(string str, int n)	
	{
		name = str;
		age = n;
	}

	void showPersonInfo() {
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
	}
};

class Employee : public Person {
private : 
	int employeeID;
	string department;
public:
	void getEmployeeInfo(string str, int n, int id, string dep) {
		getPersonInfo(str, n);
		employeeID = id;
		department = dep;
	}

	void showEmployeeInfo() {
		showPersonInfo();
		cout << "Employee ID : " << employeeID << endl; 
		cout << "Department : " << department << endl;
	}
};

class Manager : public Employee {
private: 
	int teamsize;

public:
	void getManagerInfo(string str, int n, int id, string dep, int size) {
		getEmployeeInfo(str, n,id,dep);
		teamsize = size;
	}

	void showManagerInfo() {
		showEmployeeInfo();
		cout << "Team Size : " << teamsize << endl;
	}
};

int main() {
    Person p;
    p.getPersonInfo("Alice", 30);
    cout << "Person Information:" << endl;
    p.showPersonInfo();
    cout << "---------------------" << endl;

    Employee e;
    e.getEmployeeInfo("Bob", 28, 101, "IT");
    cout << "Employee Information:" << endl;
    e.showEmployeeInfo();
    cout << "---------------------" << endl;

    Manager m;
    m.getManagerInfo("Charlie", 35, 201, "HR", 5);
    cout << "Manager Information:" << endl;
    m.showManagerInfo();
    cout << "---------------------" << endl;

    return 0;
}

