/*
sortingDemo
Peter N. Dobbs
11/2/2015
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int j;
	int i;
	
	float tmp;
	float a[4];
	a[0] = 3.0;
	a[1] = 2.0;
	a[2] = 1.0;
	a[3] = 0.0;
	
	//Bubble Sort
	for (i=0; i<3; i++){
		for(j=i+1; j<4; j++){
			if(a[i]>a[j]){	//swap em
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
			printf("%d %d %f %f %f %f\n",i,j,a[0],a[1],a[2],a[3]);
		}
	}
	
	
	
	return 0;
}
