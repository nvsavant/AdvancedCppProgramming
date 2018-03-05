/*
 * deque.cc
 *
 *  Created on: Mar 3, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <deque>

using namespace std;

void printDeque(deque<int>& d) {
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << "-->";
	}
	cout << "null" << endl;
}

bool findInDeque(deque<int>& d, int key) {
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
		if (*it == key) {
			return true;
		}
	}
	return false;
}

int main(int argc, char** argv) {
	deque<int> d;

	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	d.push_back(4);
	d.push_back(5);

	printDeque(d);

	cout << "Enter the key to find" << endl;
	int key;
	cin >> key;
//	cout << findInDeque(d, key) << endl;
	if (findInDeque(d, key) == true) {
		cout << "Key found" << endl;
	} else {
		cout << "Key not found" << endl;
	}

//	while(d.empty() == false){
//		cout <<"At front:"<<d.front()<<endl;
//		d.pop_front();
//	}
//	d.pop_front();
//	d.pop_front();
//	d.pop_front();
//	d.pop_front();
//	d.pop_front();
//	d.pop_front();

//	printDeque(d);

	return 0;
}
