/*
 * equalGeneric.cc
 *
 *  Created on: Mar 3, 2018
 *      Author: nvishwas
 */

#include <iostream>

using namespace std;

template<class T>
bool equals(T item1, T item2) {
	return item1 == item2;
}

int main(int argc, char **argv) {

	cout << equals("Nik", "Nik") << endl;

//	cout << equals(123, 12) << endl;
	cout << equals(123, 123) << endl;

//	cout << equals('a', 'b') << endl;
//	cout << equals('a', 'c') << endl;

	return 0;
}
