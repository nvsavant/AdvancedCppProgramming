/*
 * templates.cc
 *
 *  Created on: Mar 2, 2018
 *      Author: nvishwas
 */

#include <iostream>

using namespace std;

template<class T>
void display(T arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(int argc, char **argv) {

	int rollNumber[] = { 48, 67, 91 };
	string names[] = { "Nikheel", "Vishwas", "Savant" };

	display(rollNumber, 3);
	display(names, 3);

	return 0;
}
