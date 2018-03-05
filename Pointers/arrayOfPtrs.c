/*
 * arrayOfPtrs.c
 *
 *  Created on: Mar 4, 2018
 *      Author: nvishwas
 */


#include <stdio.h>


int main(int argc, char **argv) {

//	char *fName = "Nikheel";
//	char *mName = "Vishwas";
//	char *lName = "Savant";

	char *pArray[3];

//	pArray[0] = fName;
//	pArray[1] = mName;
//	pArray[2] = lName;


	pArray[0] = "Nikheel";
	pArray[1] = "Vishwas";
	pArray[2] = "Savant";



	for(int i=0;i<3;i++){
		printf("%s\n",pArray[i]);
	}

	return 0;
}
