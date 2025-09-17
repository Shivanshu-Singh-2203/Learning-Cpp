/* Implementation of private inheritence */ 

#include <iostream>
using namespace std;

/* Base Class */ 
class Person
{
public:
	string name;
	int age;

	void displayPersonInfo(){
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
	}
};

/* Derived class with private inheritence */ 
class Employee : private Person {
private:
	int employeeID;

public :
	
	void setEmployeeInfo(string n, int a, int id) {
		/* accessing the base class members inside derived class */ 
		name = n; 
		age = a;
		employeeID = id;
	}

	void displayEmployeeInfo() {
		/* Can access base class members here */

		displayPersonInfo();
		cout << "Employee ID : " << employeeID << endl;
	}
};

int main()
{
	Employee emp;
	emp.setEmployeeInfo("Alice", 19, 23333);
	emp.displayEmployeeInfo();

	/*
	* emp.name = "Bob"; // Error: name is private in employee 
	* emp.displayEmployeeInfo(); // Error: 'displayPersonInfo' is private in Employee
	*/
	return 0;

}
