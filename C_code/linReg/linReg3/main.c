/*
*	linReg3.C
*	This program performs statistical analysis on a data set.
*	Introducing modularity
*	Peter N. Dobbs
*	11/2/2015
*	Used in Lesson 4b
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double static sumX=0;
double static sumY=0;
double static sumXY=0;
double static sumX2=0;	//for sum of individual x^2
double static sumY2=0;
double static sumXX=0;	//for sum of x all squared
double static sumYY=0;

double getsum(double a[], int n) {
	int i;
	double sum = 0;
	for (i=0; i<n; i++){
		sum = sum + a[i];
	}
	return sum;
}

double getsum2(double a1[], double a2[], int n) {
	int i;
	double sum = 0;
	for (i=0; i<n; i++){
		sum = sum + (a1[i]*a2[i]);
	}
	return sum;
}

double getslope(int n){
	return ((n*sumXY)-(sumX*sumY))/((n*sumX2)-sumXX);
}

double getintercept(int m, int n){
	return (sumY-(m*sumX))/n;
}

double getr(int n){
	return ((n*sumXY)-(sumX*sumY))/(sqrt(((n*sumX2)-sumXX)*((n*sumY2)-sumYY)));
}

int main(int argc, char *argv[]) {
	
	// local variable declaration and initialization
	double x[5000];	//array for first data set
	double y[5000]; //array for second data set
	double static ynew[5000];
	
	double m=0;	//slope
	double b=0;	//intercept
	double r=0;
	double r2=0;	//r squared
	
	int i=0;
	int n=0;
	
	FILE *fp; //the star(*) indicates the pointer.
	
	// open the file
	fp = fopen("ekg1.txt", "r"); // 'r': read, 'w': write, 'a': append
	
	if (fp==NULL) {		// error catch
		printf("File not found\n");
		return 1;	// ends the program
	}
	
	// read in data
	for(i=0;fscanf(fp,"%lg %lg",&x[i],&y[i])!=EOF;i++); /*EOF: End Of File*/
	n = i;
	fclose(fp);
	
	//summation of data sets
	sumX = getsum(x,n);
	sumY = getsum(y,n);
	sumXY = getsum2(x,y,n);
	sumX2 = getsum2(x,x,n);
	sumY2 = getsum2(y,y,n);
	sumXX = pow(sumX,2.0);
	sumYY = pow(sumY,2.0);
	
	//calculate ms
	m = getslope(n);
	
	//calculate b
	b = getintercept(m, n);
	
	//calculate r, r2
	r = getr(n);
	r2 = pow(r,2.0);
	
	//print the result
	printf("The Slope: %lg\n",m);
	printf("The Intercept: %lg\n",b);
	printf("The r2: %lg\n",r2);
	
	//do the drift correction
	for(i=0;i<n;i++){
		ynew[i] = y[i] - (m*x[i]+b);
	}
	
	//write the drift corrected file to an output file
	fp = fopen("out.txt","w");	//overwrites current out.txt file
	for(i=0;i<n;i++){
		fprintf(fp, "%lg\t%lg\n", x[i], ynew[i]);
	}
	fclose(fp);
	printf("The drift correction is contained in out.txt");
	
	return 0;
}



