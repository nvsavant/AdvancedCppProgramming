/*
 * pair.cc
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

int main(int argc, char **argv) {

	map<string, int> m;

	m.insert(make_pair("Nikheel", 26));
	m.insert(make_pair("Vishwas", 48));
	m.insert(make_pair("Savant", 70));

	display(m);

	return 0;
}

