/*
 * tokens.cc
 *
 *  Created on: Mar 4, 2018
 *      Author: nvishwas
 */


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;


int main(int argc, char **argv) {

	char arr[] = "I am doing good";

	char *ptr = NULL;

	ptr = strtok(arr," ");
	while(ptr != NULL){
		cout<<ptr<<endl;
		ptr = strtok(NULL," ");
	}

	return 0;
}
