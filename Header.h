#ifndef HEADER_H_
#define HEADER_H_

#include <string>
#include <iostream>
using namespace std;

class user
{
private:
	string name;
	int age;
public:
	void getName();
	void getAge();
	void print();
};

#endif