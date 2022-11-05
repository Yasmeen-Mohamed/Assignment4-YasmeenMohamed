#include <iostream>
#include "Employee.h"
using namespace std;

class Hash1
{
private:
	Employee* p = new Employee[26];
	int count = 0;

public:
	int hashFunction(string name)
	{
		return name[0] - 65;
	}

	void insert(Employee emp)
	{
		int i = hashFunction(emp.name);
		int m = i + 1;
		if (p[i].name == "NULL")
		{
			p[i] = emp;
		}
		else
		{
			count++;
			while (m % 26 != i)
			{
				if (p[m].name == "NULL")
				{
					p[m] = emp;
					break;
				}
				else
					m++;
					count++;
			}
		}
	}

	int find(Employee emp)
	{
		int index = -1;
		int i = hashFunction(emp.name);
		int m = i + 1;
		if ((p[i].name == emp.name) && (p[i].age == emp.age) && (p[i].salary == emp.salary) && (p[i].experience == emp.experience))
		{
			index == i;
		}
		else
		{
			while (m % 26 != index)
			{
				if ((p[m].name == emp.name) && (p[m].age == emp.age) && (p[m].salary == emp.salary) && (p[m].experience == emp.experience))
				{
					index = m;
				}
			}
		}
		return index;
	}

	int collisions()
	{
		return count;
	}

	void remove(Employee emp)
	{
		int i = find(emp);
		if (i == -1)
			return;
		else
		{
			Employee no;
			p[i] = no;
		}
	}

	void print()
	{
		cout << "HASH 1" << endl;
		for (int i = 0; i < 26; i++)
		{
			if (p[i].name != "NULL")
				cout << i << ": " << endl << p[i].name << " " << p[i].age << " " << p[i].salary << " " << p[i].experience << endl;
		}
	}
};
