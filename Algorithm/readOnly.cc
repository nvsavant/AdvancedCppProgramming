/*
 * readOnly.cc
 *
 *  Created on: Mar 3, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(int argc, char **argv) {

	vector<int> numbers;
	for (int i = 0; i < 10; i++) {
		numbers.push_back(i);
	}

	int sum = accumulate(numbers.begin(), numbers.end(), 0);

	cout << sum << endl;

	return 0;
}
