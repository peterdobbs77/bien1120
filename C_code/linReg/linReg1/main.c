/*
*	linReg1.C
*	This program calculates the average of n numbers
*	in a text file where we don't know how 
*	many numbers are in the file.
*	This program works for very large data sets,
*	but does not store values from file.
*	Peter N. Dobbs
*	10/28/2015
*	Used in Lesson 4a
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	// local variable declaration and initialization
	double x[5000];	//array for first data set
	double y[5000]; //array for second data set
	
	double sumX;
	double sumY;
	double sumXY;
	double sumX2;	//for sum of individual x^2
	double sumY2;
	double sumXX;	//for sum of x all squared
	double sumYY;
	double m;	//slope
	double b;	//intercept
	double r;
	double r2;
	
	int i;
	int n;
	
	FILE *fp; //the star(*) indicates the pointer.
	
	// open the file
	fp = fopen("ekg1.txt", "r"); // 'r': read, 'w': write, 'a': append
	
	if (fp==NULL) {		// error catch
		printf("File not found\n");
		return 0;	// ends the program
	}
	
	// read in data
	for(i=0;fscanf(fp,"%lg %lg",&x[i],&y[i])!=EOF;i++) /*EOF: End Of File*/ {
//		printf("%lg\t%lg\n",x[i],y[i]);
	}
	n = i;
	fclose(fp);
	
	//summation of data sets
	sumX = 0;
	sumY = 0;
	sumX2=0;
	sumY2=0;
	sumXY=0;
	for (i=0; i<n; i++){
		sumX = sumX + x[i];
		sumY = sumY + y[i];
		sumX2 = sumX2 + (x[i]*x[i]);
		sumY2 = sumY2 + (y[i]*y[i]);
		sumXY = sumXY + (x[i]*y[i]);
	}
	sumXX = pow(sumX,2.0);
	sumYY = pow(sumY,2.0);
	
	//calculate m
	m = ((n*sumXY)-(sumX*sumY))/((n*sumX2)-sumXX);
	
	//calculate b
	b = (sumY-(m*sumX))/n;
	
	//calculate r
	r = ((n*sumXY)-(sumX*sumY))/(sqrt(((n*sumX2)-sumXX)*((n*sumY2)-sumYY)));
	
	r2 = pow(r,2.0);
	
	//print the result
	printf("The Slope: %lg\n",m);
	printf("The Intercept: %lg\n",b);
	printf("The r2: %lg\n",r2);
	
	return 0;
}

