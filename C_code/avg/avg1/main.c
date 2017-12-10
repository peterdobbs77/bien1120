/*
avg1
This Program calculates the average of 3 hardcoded numbers
Uses float variables, arithmetic, printf
Author Peter Dobbs
Created 10/10/15
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// declare variables
	float a;
	float b;
	float c;
	float avg;
	
	// assigning values
	a = 3;
	b = 5;
	c = 8;
	
	// calculating average
	avg = (a+b+c)/3.0;	//should be 5.3333333
	
	// print the result
	printf("The average of our three numbers is %f\n",avg);
	
	return 0;
}
