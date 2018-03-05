/*
 * priorityBased.cc
 *
 *  Created on: Mar 3, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {

	ifstream fp;
//	fp = open("test.txt");

	fp.open("test.txt");
	string line;
	char ch;
	while (fp) {
		getline(fp,line,' ');
		cout<<line;
		fp >> ws;
		fp>>ch;
	}

	fp.close();

	return 0;
}
