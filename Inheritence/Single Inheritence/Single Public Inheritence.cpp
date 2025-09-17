/* single public inheritence */ 

#include <iostream>
using namespace std ;

/* Base class */
class Animal 
{
public:
	void eat() {
		cout << "Animal is eating." << endl;
	}
};

/* Derived Class inheriting publicly from Animal */ 
class Dog : public Animal
{
public:
	void bark() {
		cout << "Dog is barking." << endl;
	}
};

int main()
{
	Dog myDog;
	
	myDog.eat();
	myDog.bark();

	return 0;
}
