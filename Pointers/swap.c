/*
 * swap.c
 *
 *  Created on: Mar 4, 2018
 *      Author: nvishwas
 */


#include <stdio.h>

void display(int a,int b){
	printf("a:%d\tb:%d\n",a,b);
}

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char** argv){

	int a = 10;
	int b = 20;

	printf("Before swap\n");
	display(a,b);

	printf("After swap\n");
	swap(&a,&b);
	display(a,b);

	return 0;
}
