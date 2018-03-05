/*
 * substr.cc
 *
 *  Created on: Mar 4, 2018
 *      Author: nvishwas
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv) {

	string name = "Nikheel Vishwas Savant";
	string substr;
	cout << "Enter string to be find: ";
	cin >> substr;
	int indexOfName = name.find(substr);

	if (indexOfName < 0) {
		cout << "Substring could not be found" << endl;
	} else {
		cout << indexOfName << endl;
	}

	return 0;
}
