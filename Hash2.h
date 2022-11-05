#include <iostream>
#include "Employee.h"
#include "LinkedList.h"
using namespace std;

class Hash2
{
private:
	LinkedList a[26];
	int count = 0;
public:
	int hashFunction(string name)
	{
		return name[0] - 65;
	}

	void insert(Employee emp)
	{
		int i = hashFunction(emp.name);
		if (a[i].head != NULL)
		{
			count++;
		}
		a[i].addNode(emp);
	}

	int collisions()
	{
		return count;
	}

	void remove(Employee emp)
	{
		int i = hashFunction(emp.name);
		a[i].removeNode(emp);
	}

	void print()
	{
		cout << endl << endl << "HASH 2" << endl;
		for (int i = 0; i < 26; i++)
		{
			cout << i << ": " << endl;
			a[i].printAll();
		}
	}
};