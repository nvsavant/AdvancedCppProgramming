/*
 * compare.cc
 *
 *  Created on: Mar 4, 2018
 *      Author: nvishwas
 */
//Checks char by char
#include <iostream>

using namespace std;

int main(int argc, char **argv) {

	string str1 = "clean";
	string str2 = "clean";

	if (str1 > str2) {
		cout << str1 << " is greater than " << str2 << endl;
	} else if (str1 < str2) {
		cout << str2 << " is greater than " << str1 << endl;
	} else {
		cout << str2 << " is equal to " << str1 << endl;
	}

	return 0;
}
