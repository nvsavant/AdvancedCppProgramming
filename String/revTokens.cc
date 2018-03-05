/*
 * revTokens.cc
 *
 *  Created on: Mar 4, 2018
 *      Author: nvishwas
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void swap(char* arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void reverseArray(char* arr, int start, int end) {
	for (int i = start, j = end; i <= j; i++, j--) {
		swap(arr, i, j);
	}
}

void printArray(char* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
	cout << endl;
}

int main(int argc, char **argv) {

	char arr[] = "I am doing good";
	int size = sizeof(arr) / sizeof(char);
//	printArray(arr, size);

	reverseArray(arr, 0, size - 1);
//	printArray(arr, size);


	int start = 0;
	for(int i=0;i<size;i++){
		if(' ' == arr[i]){
			reverseArray(arr,start,i-1);
			start = i+1;
			continue;
		}
	}
	reverseArray(arr,start,size-1);
	printArray(arr,size);

	return 0;
}
