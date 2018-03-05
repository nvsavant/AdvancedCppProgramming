/*
 * insertMax.cc
 *
 *  Created on: Mar 3, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <list>
using namespace std;




void display(list<int>& ll) {
	for (list<int>::iterator it = ll.begin(); it != ll.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void insertMax(list<int>& ll){
	ll.sort();
	display(ll);
}

int main(int argc, char **argv) {

	list<int> ll;

	ll.push_back(41);
	ll.push_back(12);

	insertMax(ll);

	return 0;
}
