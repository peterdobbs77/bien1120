/*
In Class Challenge 9
10/26/2015
Peter N Dobbs
This program reads in a file that has two columns of data.
Using these sets of data, X and Y, it performs stats on data.
Specifically the stats test is the "Welch's t-test"
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// local variable declaration and initialization
	double x[100];
	double y[100];
	double sumX=0;
	double sumY=0;
	double meanX=0;
	double meanY=0;
	double varX=0;
	double varY=0;
	double numerX=0;
	double numerY=0;
	double stdevX=0;
	double stdevY=0;
	double tValue=0;
	double dfValue=0;
	int length=0;
	int i=0;
	
	FILE *fp; //the star(*) indicates the pointer.
	
	// open the file(s), 'r': read, 'w': write, 'a': append
	fp = fopen("instat.txt", "r"); // reads from file
	
	if (fp==NULL) {		// error catch
		printf("File 1 not found\n");
		return 1;	// ends the program
	}
	
	// read in data sets
	for(i=0;fscanf(fp," %lf %lf",&x[i],&y[i])!=EOF;i++){
//		printf("%lf\t%lf\n",x[i],y[i]);
	}
	length = i;
	fclose(fp);
	
	// mean of data sets
	sumX = 0;
	sumY = 0;
	for(i=0; i<length; i++){
		sumX = sumX + x[i];
		sumY = sumY + y[i];
	}
	meanX = sumX/length;
	meanY = sumY/length;
	printf("Mean: %lf\t%lf\n",meanX,meanY);
	
	// variance of data sets
	for(i=0; i<length; i++){
		numerX = numerX + pow((meanX-x[i]),2.0);
		numerY = numerY + pow((meanY-y[i]),2.0);
	}
	varX = numerX/length;
	varY = numerY/length;
	printf("Variance: %lf\t%lf\n",varX,varY);
	
	// standard deviation
	stdevX = sqrt(varX);
	stdevY = sqrt(varY);
	printf("Standard Deviation: %lf\t%lf\n",stdevX,stdevY);
	
	// T value
	tValue = (meanX-meanY)/(sqrt((varX/length)+(varY/length)));
	printf("T value: %lf\n",tValue);
	
	// df' value
	dfValue = (pow((varX/length+varY/length),2.0))/(pow(varX/length,2.0)/(length-1)+pow(varY/length,2.0)/(length-1));
	printf("df' value: %lf\n",dfValue);
	
	return 0;
}
