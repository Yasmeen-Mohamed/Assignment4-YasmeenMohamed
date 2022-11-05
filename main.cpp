#include <iostream>
#include "Employee.h"
#include "Hash1.h"
#include "Hash2.h"
using namespace std;

int main()
{
	Employee e1("Mina", 30, 10000, 4);
	Employee e2("Fawzy", 45, 5000, 8);
	Employee e3("Yara", 19, 2000, 0);
	Employee e4("Mariam", 32, 8000, 2);
	Employee e5("Ayman", 33, 4000, 8);
	Employee e6("Roshdy", 28, 9000, 3);
	Employee e7("Aya", 26, 6000, 3);
	Employee e8("Abdallah", 29, 7000, 4);
	Employee e9("Fatma", 21, 3000, 1);

	Hash1 h1;
	Hash2 h2;

	h1.insert(e1);
	h1.insert(e2);
	h1.insert(e3);
	h1.insert(e4);
	h1.insert(e5);
	h1.insert(e6);
	h1.insert(e7);
	h1.insert(e8);
	h1.insert(e9);

	h2.insert(e1);
	h2.insert(e2);
	h2.insert(e3);
	h2.insert(e4);
	h2.insert(e5);
	h2.insert(e6);
	h2.insert(e7);
	h2.insert(e8);
	h2.insert(e9);

	h1.print();
	cout << endl << "Collisions: " << h1.collisions();
	h2.print();
	cout << endl << "Collisions: " << h2.collisions();

	return 0;
}

