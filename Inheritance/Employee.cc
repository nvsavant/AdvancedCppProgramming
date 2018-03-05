/*
 * Employee.cc
 *
 *  Created on: Mar 2, 2018
 *      Author: nvishwas
 */

#include <iostream>

using namespace std;

class Employee {
protected:
	string name;
	int salary;
public:
	Employee() {
		this->name = "";
		this->salary = 0;
	}
	Employee(string name, int salary) {
		this->name = name;
		this->salary = salary;
	}
};

class Manager: public Employee {
private:
	bool salaried;
public:
	Manager() :
			salaried(true) {

	}

	Manager(string name, int salary, bool salaried) :
			Employee(name, salary) {
		this->salaried = salaried;
	}

	void toString() {
		cout << "Name: " << this->name << endl;
		cout << "Salary: " << this->salary << endl;
		cout << "Salaried: " << this->salaried << endl;
	}
};

int main(int argc, char **argv) {

	Manager manager1("Nikheel", 1000, true);
	manager1.toString();

	return 0;
}
