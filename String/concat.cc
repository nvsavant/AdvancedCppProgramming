/*
 * concat.cc
 *
 *  Created on: Mar 4, 2018
 *      Author: nvishwas
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	string str = " ";
	string str1 = "hello" + str + "world";

	cout << str1 << endl;

	return 0;
}
