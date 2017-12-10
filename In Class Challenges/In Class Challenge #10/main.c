/*
In Class Challenge 10
11/2/2015
Peter N Dobbs
This program reads in a file that has 10 columns of data.
The mean, median, and standard deviation are calculated.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double getsum(double a[], int n) {
	int i;
	double sum = 0;
	for (i=0; i<n; i++){
		sum = sum + a[i];
	}
	return sum;
}

double getMedian(double a[], int n){
	int i, j;
	double swap;
	//sort the array
	for (i = 0 ; i < ( n - 1 ); i++){
		for (j = 0 ; j < n - i - 1; j++){
    		if (a[j] > a[j+1]) /* For decreasing order use < */{
				swap = a[j];
				a[j] = a[j+1];
				a[j+1] = swap;
			}
    	}
	}
	return a[n/2];
}

int main(int argc, char *argv[]) {
	
	// local variable declaration and initialization
	double a[100];
	double b[100];
	double c[100];
	double d[100];
	double e[100];
	double f[100];
	double g[100];
	double h[100];
	double k[100];
	double l[100];
	double sumA=0;
	double sumB=0;
	double sumC=0;
	double sumD=0;
	double sumE=0;
	double sumF=0;
	double sumG=0;
	double sumH=0;
	double sumK=0;
	double sumL=0;
	double meanA=0;
	double meanB=0;
	double meanC=0;
	double meanD=0;
	double meanE=0;
	double meanF=0;
	double meanG=0;
	double meanH=0;
	double meanK=0;
	double meanL=0;
	double medianA=0;
	double medianB=0;
	double medianC=0;
	double medianD=0;
	double medianE=0;
	double medianF=0;
	double medianG=0;
	double medianH=0;
	double medianK=0;
	double medianL=0;
	double numerA=0;
	double numerB=0;
	double numerC=0;
	double numerD=0;
	double numerE=0;
	double numerF=0;
	double numerG=0;
	double numerH=0;
	double numerK=0;
	double numerL=0;
	double stdevA=0;
	double stdevB=0;
	double stdevC=0;
	double stdevD=0;
	double stdevE=0;
	double stdevF=0;
	double stdevG=0;
	double stdevH=0;
	double stdevK=0;
	double stdevL=0;
	int length=0;
	int i=0;
	
	FILE *fp; //the star(*) indicates the pointer.
	
	// open the file(s), 'r': read, 'w': write, 'a': append
	fp = fopen("instat2.txt", "r"); // reads from file
	
	if (fp==NULL) {		// error catch
		printf("File 1 not found\n");
		return 1;	// ends the program
	}
	
	// read in data sets
	for(i=0;fscanf(fp," %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i],&g[i],&h[i],&k[i],&l[i])!=EOF;i++);
	length = i;
	fclose(fp);
	
	// median of data sets
	medianA = getMedian(a, length);
	medianB = getMedian(b, length);
	medianC = getMedian(c, length);
	medianD = getMedian(d, length);
	medianE = getMedian(e, length);
	medianF = getMedian(f, length);
	medianG = getMedian(g, length);
	medianH = getMedian(h, length);
	medianK = getMedian(k, length);
	medianL = getMedian(l, length);

	// mean of data sets
	sumA = getsum(a, length);
	sumB = getsum(b, length);
	sumC = getsum(c, length);
	sumD = getsum(d, length);
	sumE = getsum(e, length);
	sumF = getsum(f, length);
	sumG = getsum(g, length);
	sumH = getsum(h, length);
	sumK = getsum(k, length);
	sumL = getsum(l, length);
	meanA = sumA/length;
	meanB = sumB/length;
	meanC = sumC/length;
	meanD = sumD/length;
	meanE = sumE/length;
	meanF = sumF/length;
	meanG = sumG/length;
	meanH = sumH/length;
	meanK = sumK/length;
	meanL = sumL/length;
	
	
	
	//Standard Deviation of data sets
	for(i=0; i<length; i++){
		numerA = numerA + pow((meanA-a[i]),2.0);
		numerB = numerB + pow((meanB-b[i]),2.0);
		numerC = numerC + pow((meanC-c[i]),2.0);
		numerD = numerD + pow((meanD-d[i]),2.0);
		numerE = numerE + pow((meanE-e[i]),2.0);
		numerF = numerF + pow((meanF-f[i]),2.0);
		numerG = numerG + pow((meanG-g[i]),2.0);
		numerH = numerH + pow((meanH-h[i]),2.0);
		numerK = numerK + pow((meanK-k[i]),2.0);
		numerL = numerL + pow((meanL-l[i]),2.0);
	}
	stdevA = sqrt(numerA/length);
	stdevB = sqrt(numerB/length);
	stdevC = sqrt(numerC/length);
	stdevD = sqrt(numerD/length);
	stdevE = sqrt(numerE/length);
	stdevF = sqrt(numerF/length);
	stdevG = sqrt(numerG/length);
	stdevH = sqrt(numerH/length);
	stdevK = sqrt(numerK/length);
	stdevL = sqrt(numerL/length);
	
	printf("Mean\t\tMedian\t\tStd Dev\n");
	printf("%lf\t%lf\t%lf\n",meanA,medianA,stdevA);
	printf("%lf\t%lf\t%lf\n",meanB,medianB,stdevB);
	printf("%lf\t%lf\t%lf\n",meanC,medianC,stdevC);
	printf("%lf\t%lf\t%lf\n",meanD,medianD,stdevD);
	printf("%lf\t%lf\t%lf\n",meanE,medianE,stdevE);
	printf("%lf\t%lf\t%lf\n",meanF,medianF,stdevF);
	printf("%lf\t%lf\t%lf\n",meanG,medianG,stdevG);
	printf("%lf\t%lf\t%lf\n",meanH,medianH,stdevH);
	printf("%lf\t%lf\t%lf\n",meanK,medianK,stdevK);
	printf("%lf\t%lf\t%lf\n",meanL,medianL,stdevL);
	

	return 0;
}

