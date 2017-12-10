/*
In Class Challenge 3
Robodialing:
Uses a loop to change phone number
Author Peter Dobbs
Created: 9/16/15
Updated: 9/21/15
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	//robodialing
	//starting number: (414) 555-0110
	//increment the phone number by one until you reach (414) 555-0111
	
	//(phoneArea) phonePref-phoneSuff
	int phoneArea = 414;
	int phonePref = 555;
	int phoneSuff = 9000;
	int i = 0;
	
//	for (i=0; i<10; i++){
////		printf("(%d) ", phoneArea);
////		printf("%d-", phonePref);
////		printf("%04d\n", phoneSuff);
//		if (phoneSuff <= 999){
//			printf("(%d) %d-%04d\n", phoneArea, phonePref, phoneSuff+i);
//		}
//		if (phoneSuff > 999){
//			printf("(%d) %d-%d\n", phoneArea, phonePref, phoneSuff+i);
//		}
//	}
	
	for(i=0; i<1000; i++){
		printf("(%d) %d-%d\n", phoneArea, phonePref, phoneSuff+i);
	}
	
	return 0;
}
