/*
In Class Challenge 5
This program robodials with user input
Peter Dobbs
9/28/2015
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//increment the phone number by one until you reach (414) 555-0111
	
	//variable declaration //initialize to zero
	int phoneArea=0;	//variable for areacode
	int phonePref=0;	//variable for exchange/prefix
	int phoneSuff=0;	//variable for suffix
	int i = 0;
	
	//user input
	printf("Enter the area code:\n");
	scanf("%i", &phoneArea);	//takes input and assigns it to 'phoneArea'
	printf("Enter the exchange/prefix:\n");
	scanf("%i", &phonePref);	//takes input and assigns it to 'phonePref'
	printf("Enter the suffix:\n");
	scanf("%i", &phoneSuff);	//takes input and assigns it to 'phoneSuff'
	
	//prints phone list to console
	for (i=0; i<10; i++){
		if (phoneSuff < 1000){
			printf("(%d) %d-%04d\n", phoneArea, phonePref, phoneSuff+i);
		}
		if (phoneSuff >= 1000){
			printf("(%d) %d-%d\n", phoneArea, phonePref, phoneSuff+i);
		}
	}
	
	return 0;
}
