/*
 * exception.cc
 *
 *  Created on: Mar 3, 2018
 *      Author: nvishwas
 */

#include <iostream>

using namespace std;

class myException: public exception {
public:
	const char* what() {
		return "Shit!!!";
	}
};

double div(double num, double den) {
	if (den == 0) {
		throw myException();
	}
	return num / den;
}

int main(int argc, char **argv) {
	try {
		cout << div(12, 0) << endl;
	}
//		catch (myException& e) {
//		cout << e.what() << endl;
//	}
	catch (...) {
		cout << "Exception thrown and caught" << endl;
	}

	return 0;
}
