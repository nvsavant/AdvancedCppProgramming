/*
 * constPtr.c
 *
 *  Created on: Mar 4, 2018
 *      Author: nvishwas
 */


#include <stdio.h>


int main(int argc, char **argv) {

	char ch = 'a';
	const char c = 'c';

	//Constant Pointer
	char *const ptr1 = &ch;
//	ptr1 = &c;


	//Pointer to a constant
	const char *ptr2 = &c;
	*ptr2 = 'd';

	return 0;
}
