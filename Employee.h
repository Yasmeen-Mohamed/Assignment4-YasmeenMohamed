#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee
{
public:
	string name;
	int age;
	int salary;
	int experience;

	Employee()
	{
		name = "NULL";
		age = 0;
		salary = 0;
		experience = 0;
	}

	Employee(string n, int a, int s, int exp)
	{
		name = n;
		age = a;
		salary = s;
		experience = exp;
	}
};
#endif