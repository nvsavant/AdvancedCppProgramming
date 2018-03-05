/*
 * multimap.cc
 *
 *  Created on: Mar 3, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <map>

using namespace std;

void display(multimap<string, int>& m) {
	for (multimap<string, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "[" << it->first << "," << it->second << "]" << endl;
	}
}

void findName(multimap<string, int>& m, string name) {
	multimap<string, int>::iterator first = m.find(name);
	multimap<string, int>::iterator last = m.upper_bound(name);

	for (; first != last; first++) {
		cout << "[" << first->first << "," << first->second << "]" << endl;
	}
}

int main(int argc, char **argv) {

	multimap<string, int> m;

	m.insert(make_pair("Nikheel", 26));
	m.insert(make_pair("Nikheel", 26));
	m.insert(make_pair("Nikheel", 26));
	m.insert(make_pair("Nikheel", 26));
	m.insert(make_pair("Vishwas", 48));
	m.insert(make_pair("Savant", 70));

	string name;
	cout << "Enter name to find" << endl;
	cin >> name;

	findName(m, name);

//	display(m);

	return 0;
}
