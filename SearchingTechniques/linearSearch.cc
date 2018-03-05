/*
 * linearSearch.cc
 *
 *  Created on: Mar 4, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

//Returns the index
int search(int arr[], int size, int key) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}

void createArray(int arr[], int size) {
	srand((unsigned int) time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = (int) rand() % 100;
	}
}

void display(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(int argc, char **argv) {

	const int size = 20;
	int arr[size];
	createArray(arr, size);

	display(arr,size);

	cout << "Enter the element to be searched" << endl;
	int key;
	cin >> key;
	cout << key << " is at index " << search(arr, size, key) << endl;

	return 0;
}
