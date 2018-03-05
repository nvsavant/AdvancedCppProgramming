/*
 * set.cc
 *
 *  Created on: Mar 3, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <set>
using namespace std;

void display(set<string>& s) {
	for (set<string>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << endl;
	}
}

bool findName(set<string>& s, string name) {
	if(s.find(name) == s.end()){
		return false;
	}else{
		return true;
	}
}

int main(int argc, char **argv) {
	set<string> s;

	s.insert("Nikheel");
	s.insert("Nikheel");
	s.insert("Vishwas");
	s.insert("Savant");

//	s.erase("Vishwas");
//	s.erase("Savant");

//	display(s);

	string name;
	cout << "Enter name to find" << endl;
	cin >> name;

	if (findName(s, name)) {
		cout << "Name found" << endl;
	} else {
		cout << "Name not found" << endl;
	}

	return 0;
}
