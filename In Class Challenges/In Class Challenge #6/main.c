/*
In Class Challenge 6
This program takes the input of a text file and 
counts how many times the number 5 is listed.
It only works for files with less than 5000 numbers.
Peter N. Dobbs
10/5/2015
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	// local variable declaration and initialization
	float a[5000];	//array with n elements
	float sum = 0;	//to be used for sum of array elements
	float avg = 0;	//to be used for average of array elements
	int i;			//to be used as index for the for-loops
	int count;		//to be used for the number of integer usages
	int num = 0;
	FILE *fp; //the star(*) indicates the pointer.
	
	// open the file
	fp = fopen("in.txt", "r"); // 'r': read, 'w': write, 'a': append
	
	if (fp==NULL) {		// error catch
		printf("File not found\n");
		return 1;	// ends the program
	}
	
	i=0;
	while(fscanf(fp, "%g",&a[i])!=EOF){
		i++;
	}
	num = i;
	// close the file
	fclose(fp);
	
	count = 0;
	for (i=0; i<num; i++){
		if (a[i]==5) count++;
	}
	
	printf("5 is listed %i times\n", count); //should be 106 times
	
	system("PAUSE");
	return 0;
}
