
/*
avg2 - from Lesson 1c
This program calculates the average of 3 numbers
Uses array, arithmetic, printf
@author Peter N Dobbs
Created: 10/10/2015
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// declare variables
	float a[3];	//a is a 3 element array
	float avg;	
	
	// assigning values
	a[0] = 3;
	a[1] = 5;
	a[2] = 8;
	
	// calculating average
	avg = (a[0]+a[1]+a[2])/3.0;
	
	// print the result
	printf("The average of our three numbers is %f\n",avg);
	
	return 0;
}
