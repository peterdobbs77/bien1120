/*
In Class Challenge 4
This program calculates the sum of numbers
between two given integers and the product 
of those numbers, then finds the ratio of 
the sum and the product. The range should be
exclusive
Author Peter Dobbs
Created 9/23/15
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	//variable declaration and initialization
	int a = 10;	//given integer 1
	int b = 20;	//given integer 2
	int i = 0;
	int range_var = b-(a+1);	//variable for range
	int range_array[range_var];	//array holding the range
	float sum = 0;
	float prod = 1;
	float ratio = 0;	//quotient of sum and product
	
	//print the range
	printf("Range = %i\n", range_var);
	
	for(i = 0; i<range_var; i++){
		range_array[i] = a+1;
		a++;
	}
	
	//sum of range(a to b)
	for(i = 0; i<range_var; i++){
		sum = sum + range_array[i];
	}
	printf("Sum: %g\n", sum);
	
	//product of range(a to b)
	for(i = 0; i<range_var; i++){
		prod = prod * range_array[i];
	}
	printf("Product: %g\n", prod);
	
	//calculate (sum of range(a to b))/(product of range(a to b))
	ratio = sum/prod;
	printf("Ratio: %g\n", ratio);
	
	system("PAUSE");
	return 0;
}
