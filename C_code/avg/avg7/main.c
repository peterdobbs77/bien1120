/*
*	avg7
*	This program calculates the average of n numbers
*	in a text file where we don't know how 
*	many numbers are in the file.
*	This program works for very large data sets,
*	but does not store values from file.
*	This 'C' program was written by Peter N. Dobbs
*	10/26/2015
*	Used in Lesson 3
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// local variable declaration and initialization
	double temp;		//variable for temperature
	
	double sum;	//to be used for sum of array elements
	double avg;	//to be used for average of array elements
	
	unsigned i;		//counting index max value is 4 billion
	unsigned num;	//to be used for how many numbers are averaged
	
	FILE *fp; //the star(*) indicates the pointer.
	
	// open the file
	fp = fopen("in.txt", "r"); // 'r': read, 'w': write, 'a': append
	
	if (fp==NULL) {		// error catch
		printf("File not found\n");
		return 0;	// ends the program
	}
	
	// calculate sum of input
	i = 0;
	num = 0;
	sum = 0;
	while (fscanf(fp,"%lg",&temp)!=EOF) /*EOF: End Of File*/ {
		sum = sum + temp;	//only does summation, does not store individual values
		i++;
	}
	num = i;
	
	// close the file
	fclose(fp);
	
	// calculuate avg of input
	avg = sum/(num*1.0);
	
	// print out results
	printf("the average of the %d numbers is %lg\n",num,avg);
	
	return 0;
}

