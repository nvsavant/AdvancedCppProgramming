/*
 * list.cc
 *
 *  Created on: Mar 3, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void printList(list<string>& ll) {
	for (list<string>::iterator it = ll.begin(); it != ll.end(); it++) {
		cout << *it << "-->";
	}
	cout << "null" << endl;
}



int main(int argc, char **argv) {
	list<string> ll;

	ll.push_back("Vishwas");
	ll.push_back("Nikheel");
	ll.push_back("Savant");

	printList(ll);

	return 0;
}
