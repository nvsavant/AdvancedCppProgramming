/*
 * Animal.cc
 *
 *  Created on: Mar 2, 2018
 *      Author: nvishwas
 */

#include <iostream>

using namespace std;

class Animal {
public:
	virtual void speak() = 0;
	virtual ~Animal() {

	}
};

class Dog: public Animal {
public:
	virtual void speak() {
		cout << "Whof Whof" << endl;
	}
};

class Cat: public Animal {
public:
	virtual void speak() {
		cout << "Meow Meow" << endl;
	}
};

int main(int argc, char **argv) {

	Dog d;
	Cat c;

	d.speak();
	c.speak();


	return 0;
}
