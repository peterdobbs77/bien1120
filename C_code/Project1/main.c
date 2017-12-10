/*
Project1.C
11/9/2015
Peter N Dobbs
Program to calculate average distance between DNA base pairs.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**getSum()
	sums the contents of an array 'a[]', length 'n'
params: 
	int a[]: holds data
		in this case: distances from base A
	int n: length of a[]
		in this case: number of bases appearing in DNA segment
returns:
	sum of the contents of the array
*/
double getSum(int a[], int n) {
	int i;
	int sum = 0;
	for (i=0; i<n; i++){
		sum = sum + a[i];
	}
	return sum;
}

/**getStdDev()
	finds standard deviation of array 'a[]', length 'n', given 'avg'
params:
	int a[]: 
		in this case: distances from base A,
	double avg: average of a[]
		in this case: average distance from base A,
	int n: length of a[]
		in this case: number of bases appearing in DNA segment
returns:
	standard deviation of distances from base A
*/
double getStdDev(int a[], double avg, int n){
	int i;
	double sum = 0;
	for (i=0; i<n; i++){
		sum = sum + pow((a[i]-avg),2.0);
	}
	double stdDev = sqrt(sum/n*1.0);
	return stdDev;
}

/**main()
	
*/
int main(int argc, char *argv[]) {
	
	//variables
	char a[5000];	//array for holding DNA sequence
	int length = 0;	//length of DNA sequence
	int numA = 0;	//number of base A occurences
	int numT = 0;	//number of base T occurences
	int numG = 0;	//number of base G occurences
	int numC = 0;	//number of base C occurences
	int numAA = 0;
	int numAT = 0;
	int numAG = 0;
	int numAC = 0;
	int i = 0; 		//index
	FILE *fp;		//file pointer
	
	//reading base pairs from file into array
	fp = fopen("Homo_sapiens_c12_fragment.txt","r");
	
	if (fp==NULL) {		// error catch
		printf("File 1 not found\n");
		return 1;	// ends the program
	}
	
	for(i=0;fscanf(fp,"%c",&a[i])!=EOF;i++);
	length = i;
	fclose(fp);
	
	//count number of each base pair
	for (i=0; i<length; i++){
		if (a[i] == 'A') numA++;
		if (a[i] == 'C') numC++;
		if (a[i] == 'G') numG++;
		if (a[i] == 'T') numT++;
	}
	
	int distanceAA[numA];	//arrays for holding the distances from
	int distanceAC[numC];	//base A that have length based on the
	int distanceAG[numG];	//number of base pairs appearing in the
	int distanceAT[numT];	//input DNA sequence.
	
	int countAA = 0;	//index of distanceAA[]
	int countAC = 0;	//index of distanceAC[]
	int countAG = 0;	//index of distanceAG[]
	int countAT = 0;	//index of distanceAT[]
	int offset = 0;		//adjusts if base A is passed
	for(i=0; i<length; i++){
		if (a[i] == 'A'){
			//distance = location of <base> in array - last instance of base A
			distanceAA[countAA] = i - offset;
			countAA++;	//increase index of array for storage
			offset = i;	//reset offset to location of closest base A
		}
		if (a[i] == 'C'){
			distanceAC[countAC] = i - offset;
			countAC++;
		}
		if (a[i] == 'G'){
			distanceAG[countAG] = i - offset;
			countAG++;
		}
		if (a[i] == 'T'){
			distanceAT[countAT] = i - offset;
			countAT++;
		}
	}
	
	// find average distance between bases
	double avgAA = getSum(distanceAA, numA)/(numA-1);	//mean AA: 4.923
	double avgAC = getSum(distanceAC, numC)/(numC);		//mean AC: 5.541
	double avgAG = getSum(distanceAG, numG)/(numG);		//mean AG: 5.585
	double avgAT = getSum(distanceAT, numT)/(numT);		//mean AT: 5.905
	
	// find the standard deviation
	double stdDevA = getStdDev(distanceAA, avgAA, countAA);
	double stdDevC = getStdDev(distanceAG, avgAC, countAC);
	double stdDevG = getStdDev(distanceAG, avgAG, countAG);
	double stdDevT = getStdDev(distanceAT, avgAT, countAT);
	
	// print results
	printf("\tbaseA\tbaseC\tbaseG\tbaseT\n");
	//number of respective bases
	printf("number:\t%d\t%d\t%d\t%d\n", numA, numC, numG, numT);	// 1016, 1607, 1357, 1020
	//average distance from A
	printf("avgDst:\t%lg\t%lg\t%lg\t%lg\n", avgAA, avgAC, avgAG, avgAT);
	//standard deviation of distances
	printf("stdDev:\t%lg\t%lg\t%lg\t%lg\n", stdDevA, stdDevC, stdDevG, stdDevT);
	
	return 0;
}
