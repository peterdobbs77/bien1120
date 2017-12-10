/*
*	avg6
*	This program calculates the average of n numbers
*	in a text file where we don't know how 
*	many numbers are in the file.
*	This program only works for files < 5000 points
*	This 'C' program was written by Peter N. Dobbs
*	10/4/2015
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// local variable declaration and initialization
	float a[5000];	//array with n elements
	float sum = 0;	//to be used for sum of array elements
	float avg = 0;	//to be used for average of array elements
	int i = 0;		//to be used as index for the for-loops
	int num = 0;	//to be used for how many numbers are averaged
	
	FILE *fp; //the star(*) indicates the pointer.
	
	// open the file
	fp = fopen("in.txt", "r"); // 'r': read, 'w': write, 'a': append
	
	if (fp==NULL) {		// error catch
		printf("File not found\n");
		return 0;	// ends the program
	}
	
	// assigning values to array a[num]
	i = 0;
	while (fscanf(fp,"%g",&a[i])!=EOF) /*EOF: End Of File*/ {
		i++;
	}
	num = i;
	
	// close the file
	fclose(fp);
	
	// algorithm for finding sum of array
	for (i=0;i<num;i++) {
		sum = sum + a[i];
	}
	
	// algorithm for finding average of array
	avg = sum/num;
	
	// print out results
	printf("the average of the %d numbers is %f\n",num,avg);
	
	return 0;
}
