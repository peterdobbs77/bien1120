/*
This 'C' program was written by Peter N. Dobbs
10/4/2015
It calculates the average of n numbers
*/

#include <stdio.h>
#include <stdlib.h>

// function declaration
float fsumOfArray(int n, float a[n]);

int main(int argc, char *argv[]) {
	
	// find out how many numbers to average...
	int num = 0;
//	printf("How many numbers would you like to average?\n");
//	// make sure that '%whatever' is the same when using the same variable
//	scanf("%i",&num);	//reads in a decimal integer, assigns it to "n"
	
	// local variable declaration and initialization
	float a[num];	//array with n elements
	float sum = 0;	//to be used for sum of array elements
	float avg = 0;	//to be used for average of array elements
	int i = 0;		//to be used as index for the for-loops
	
	FILE *fp; //the star(*) indicates the pointer.
	
	// assigns the number of points
	num = 7;
	
	// open the file
	fp = fopen("in.txt", "r"); // 'r': read, 'w': write, 'a': append
	
	if (fp==NULL) {		// error catch
		printf("File not found\n");
		return 0;	// ends the program
	}
	
	// assigning values to array a[num]
	for (i=0;i<num;i++)
		fscanf(fp,"%g",&a[i]); // reads from file, places into array
	
	// close the file
	fclose(fp);
	
	// algorithm for finding sum of array
	for (i=0;i<num;i++)
		sum = sum + a[i];
	
	// algorithm for finding average of array
	avg = sum/num;	// average = (sum of array)/(number of elements)
	
	// print out results
	printf("the average is %f\n",avg);
	
	return 0;
}
