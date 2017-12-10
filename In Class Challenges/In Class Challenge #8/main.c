/*
In Class Challenge 8
10/21/2015
Peter Dobbs
Input 10 files, automated, 
output file that lists in order 
the number of points per file
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	int i;
	int count;
	int num;
	float a[5000];
	char fname[100];	//just long enough for any filename size
	FILE *fpIn;
	FILE *fpOut;
	
	for(i=1; i<=10; i++){
		sprintf(fname, "in%d.txt",i);
		printf("%s\n", fname);
		//then instead of fpIn = fopen("in1.txt", "r");
		fpIn = fopen(fname, "r");
		fpOut = fopen("out.txt", "a");
		count=0;
		while(fscanf(fpIn, "%g",&a[count])!=EOF){
			count++;
		}
		fprintf(fpOut,"%d\n", count);
		fclose(fpIn);
		fclose(fpOut);
	}
	
	return 0;
}
