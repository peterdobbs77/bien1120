/*
This program was written by Peter N. Dobbs
9/7/2015
This program calculates the average of n numbers
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// find out how many numbers to average...
	int n;
	printf("How many numbers would you like to average?\n");
	scanf("%d",&n);	//reads in a decimal integer, assigns it to "n"
	
	// declaring variables
	float a[n];		//array with n elements
	float sum;		//to be used for sum of array elements
	float avg;		//to be used for average of array elements
	int i;			//to be used as index for the for-loops
	
	// assigning values
	printf("Enter the numbers to average...\n");
	for (i=0;i<n;i++){
		printf("Number %i\n",i+1); //doing i+1 does not change value of "i"
		scanf("%g",&a[i]);	//reads in float numbers, places them in array
	}
	

	sum = 0;
	// algorithm for finding sum of array
	for (i=0;i<n;i++){
		sum = sum + a[i];
	}
	
	// algorithm for finding average of array
	avg = sum/n;	// average = (sum of array)/(number of elements)
	
	// print out results
	printf("the average is %f\n",avg);
	
	system("PAUSE");
	return 0;
}
