/*
avg5 - from Lesson 2b
This program calculates the average of n numbers,
Using an array and a loop, input entered using a text file 
The name of the text file has to be in.txt
@author Peter N Dobbs
Created: 10/12/2015
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// declare variables
	float a[500];	//a is a 3 element array
	float sum;	
	float avg;	
	int i;
	int n;
	
	FILE *fp;
	
	// assign the number of points
	n = 5;
	
	//open the file
	fp = fopen("in.txt","r");	//r stands for read
	
	if (fp==NULL) {		// error catch
		printf("File not found\n");
		return 1;	// ends the program
	}
	
	//assigning values
	for (i=0;i<n;i++){
		fscanf(fp,"%g",&a[i]);
	}
	//close the file
	fclose(fp);
	
	//algorithm for finding sum of array
	sum = 0;
	for(i=0;i<n;i++){
		sum = sum + a[i];
	}
	avg = sum/(n*1.0);
	
	// print the result
	printf("The average of our %d numbers is %f\n",n,avg);
	
	return 0;
}


