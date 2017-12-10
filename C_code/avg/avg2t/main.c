/*
avg2 - from Lesson 1c
This program calculates the average of 3 numbers
Using arrays, new algorithm for sum, printf
@author Peter N Dobbs
Created: 10/10/2015
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// declare variables
	float a[3];	//a is a 3 element array
	float sum;	
	float avg;	
	int i;
	
	// assigning values
	a[0] = 3;
	a[1] = 5;
	a[2] = 8;
	
	// calculating average, old algorithm
//	avg = (a[0]+a[1]+a[2])/3.0;
	
	//new algorithm
	i = 0;
	sum = 0;
	printf("%d %f\n", i, sum);	//to print int use d (decimal), print float use f (float)
	
	sum = sum + a[i];
	printf("%d %f\n", i, sum);
	
	i = i + 1;
	sum = sum + a[i];
	printf("%d %f\n", i, sum);

	i = i + 1;
	sum = sum + a[i];
	printf("%d %f\n", i, sum);
	
	avg = sum/3.0;
	
	// print the result
	printf("The average of our three numbers is %f\n",avg);
	
	return 0;
}
