/*
 * map.cc
 *
 *  Created on: Mar 3, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <map>

using namespace std;

void display(map<string, int>& m) {
	for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "[" << it->first << "," << it->second << "]" << endl;
	}
}

bool findName(map<string, int>& m, string name) {
	if (m.find(name) != m.end()) {
		return true;
	} else {
		return false;
	}
}

int main(int argc, char **argv) {

	map<string, int> m;

	m.insert(make_pair("Nikheel", 26));
	m.insert(make_pair("Vishwas", 48));
	m.insert(make_pair("Savant", 70));

	m.erase("Vishwas");

	string name;
	cout << "Enter name to find" << endl;
	cin >> name;

	if (findName(m, name)) {
		cout << "Name found" << endl;
	} else {
		cout << "Name not found" << endl;
	}

//	display(m);

	return 0;
}
