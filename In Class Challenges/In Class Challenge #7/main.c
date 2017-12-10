/*
In Class Challenge 7
This program pulls data from text files to do a comparison
This program only works for files < 50 points.
If you run more than once, the text in the file will be 
duplicated within the text file.
Author Peter N. Dobbs
Created: 10/12/2015
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// local variable declaration and initialization
	char first_name[100];
	char second_name[100];
	int catNum[50];
	char patientStatus;
	int i = 0;
	
	FILE *fpName; //the star(*) indicates the pointer.
	FILE *fpNumb;
	FILE *fpOut;
	
	// open the files, 'r': read, 'w': write, 'a': append
	fpName = fopen("med_data_1.txt", "r"); // reads from file
	fpNumb = fopen("med_data_2.txt", "r"); // reads from file
	fpOut = fopen("output.txt", "a");	// appends to file
	
	if (fpName==NULL) {		// error catch
		printf("File 1 not found\n");
		return 1;	// ends the program
	}
	if (fpNumb==NULL) {		// error catch
		printf("File 2 not found\n");
		return 2;	// ends the program
	}
	
	for(i=0; i<50; i++){
		// read from files
		fscanf(fpName,"%s %s",&first_name[0],&second_name[0]);
		fscanf(fpNumb,"%d",&catNum[i]);
		
		// write to file
		//printf("%d\t", catNum[i]);
		fprintf(fpOut, "%d\t", catNum[i]);
		
		if(catNum[i]<=5000) fprintf(fpOut, "normal\t\t"); //printf("normal\t\t");
		else fprintf(fpOut, "emergency\t"); //printf("emergency\t");
		
		//printf("%s %s \n", first_name, second_name);
		fprintf(fpOut, "%s %s \n", first_name, second_name);
	}
	
	fclose(fpName);
	fclose(fpNumb);
	fclose(fpOut);
	
	return 0;
}
