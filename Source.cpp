#include "Header.h"
#include <iostream>
#include <string>
using namespace std;

void user::print()
{
	cout << endl;
	cout << "Hello World! My name is " << name << "!" << endl;
	cout << "I'm " << age << " years old!" << endl;
}

void user::getName()
{
	cout << "Enter your name! ";
	getline(cin, name);
}

void user::getAge()
{
	cout << "Enter your age: ";
	cin >> age;
}
