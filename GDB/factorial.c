/*
 * factorial.c
 *
 *  Created on: Mar 4, 2018
 *      Author: nvishwas
 */

#include <stdio.h>

int factorial(int num){
	int j = 1;
	int i;
	for (i = 1; i <= num; i++) {
		j = j * i;
	}
	return j;

}

int fact(int num){
	return factorial(num);
}

int main(int argc, char **argv) {
	int num;

	printf("Enter the number: ");
	scanf("%d", &num);

	

	printf("Factorial of %d is %d\n", num, fact(num));

	return 0;
}
