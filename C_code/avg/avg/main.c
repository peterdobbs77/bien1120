
/*
avg - combined
This Program calculates the average of input numbers
Uses keyboard input, arrays, loops
Author Peter Dobbs
Created 10/10/15
*/
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// find out how many numbers to average...
	int num = 0;
	printf("How many numbers would you like to average?\n");
	// make sure that '%whatever' is the same when using the same variable
	scanf("%i",&num);	//reads in a decimal integer, assigns it to "n"
	printf("Number %i\n",num);
	
	// local variable declaration
	float a[num];		//array with n elements
	float sum = 0;	//to be used for sum of array elements
	float avg = 0;	//to be used for average of array elements
	int i = 0;		//to be used as index for the for-loops
	
	// assigning values
	printf("Enter the numbers to average...\n");
	for (i=0;i<num;i++){
		printf("Number %i\n",i+1); //doing i+1 does not change value of "i"
		scanf("%g",&a[i]);	//reads in float numbers, places them in array
	}
	
	// algorithm for finding sum of array
	for (i=0;i<num;i++){
		sum = sum + a[i];
	}
	
	// algorithm for finding average of array
	avg = sum/num;	// average = (sum of array)/(number of elements)
	
	// print out results
	printf("the average is %f\n",avg);
	
	system("PAUSE");
	return 0;
}
