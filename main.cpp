#include "Header.h"
#include <iostream>
using namespace std;


int main()
{
	cout << "Hello!" << endl;
	user person;
	person.getName();
	person.getAge();
	person.print();
	cin.get();

	return 0;
}