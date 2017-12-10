/*
avg3 - from Lesson 2a
This program calculates the average of 3 numbers,
Uses an array and a loop, introduces new sum algorithm.
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
	
	//new algorithm
/*	
	sum = 0;
	i = 0;
	while(i<3){
		sum = sum + a[i];
		//to print int use d (decimal), to print float use f (float)
		printf("%d %f\n", i, sum);
		i++;	// much better than i=i+1
	}
*/	
	sum = 0;
	for(i=0;i<3;i++){
		sum = sum + a[i];
	}
	avg = sum/3;
	
	// print the result
	printf("The average of our three numbers is %f\n",avg);
	
	return 0;
}

