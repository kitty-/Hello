#include "Header.h"
#include <iostream>
#include <string>
using namespace std;

void user::print()
{
	cout << "Hello World! My name is " << name << "!" << endl;
}

void user::getName()
{
	cout << "Enter your name! ";
	getline(cin, name);
}