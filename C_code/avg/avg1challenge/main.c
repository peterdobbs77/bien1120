/*
avg1challenge
This program calculates the avg of 4 numbers
Uses float variables, arithmetic, and printf
@author Peter N Dobbs
Created: 10/10/2015
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// declare variables
	float a;
	float b;
	float c;
	float d;
	float avg;
	
	// assigning values
	a = 3;
	b = 5;
	c = 8;
	d = 4;
	
	// calculating average
	avg = (a+b+c+d)/4.0;
	
	// print the result
	printf("The average of our three numbers is %f\n",avg);
	
	return 0;
}
