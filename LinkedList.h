#include <iostream>
#include "Employee.h"
using namespace std;

struct Node
{
	string name;
	int age;
	int salary;
	int experience;
	Node* next;
};

class LinkedList
{
public:
	Node* head;

	LinkedList()
	{
		head = NULL;
	}

	void addNode(Employee e)
	{
		Node* p = new Node;
		Node* temp = head;
		if (head == NULL)
		{
			p->name = e.name;
			p->age = e.age;
			p->salary = e.salary;
			p->experience = e.experience;
			p->next = NULL;
			head = p;
		}
		else
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			Node* p = new Node;
			p->name = e.name;
			p->age = e.age;
			p->salary = e.salary;
			p->experience = e.experience;
			temp->next = p;
			p->next = NULL;
		}
	}

	void removeNode(Employee e)
	{
		Node* delptr = head;
		if (head->name == e.name && head->age == e.age && head->salary == e.salary && head->experience == e.experience)
		{
			head = head->next;
			delete delptr;
		}
		else
		{
			Node* prev = NULL;
			delptr = head;
			while (delptr->name != e.name && delptr->age != e.age && delptr->salary != e.salary && delptr->experience != e.experience)
			{
				prev = delptr;
				delptr = delptr->next;
			}
			prev->next = delptr->next;
			delete delptr;
		}
	}

	void printAll()
	{
		Node* temp = head;
		while (temp != NULL)
		{
			cout << temp->name << " " << temp->age << " " << temp->salary << " " << temp->experience << endl;
			temp = temp->next;
		}
	}
};