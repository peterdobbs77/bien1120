/*
*	swap.C
*	Peter N Dobbs 12/17/2015
*	implementation of bubble sort
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char alpha[26];
	int i = 0;
	int j = 0;
	char tmp;
	
	strcpy(alpha,"qwertyuiopasdfghjklzxcvbnm");
	printf("before sort: %s\n",alpha);
	
//	for(i=0; i<128; i++){
//		printf("%d	%c\n",i,i);
//	}
	
	//the bubble sort
	for (i=0; i<25; i++){
		for (j=1; j<26; j++){
			if(alpha[i]>alpha[j]){
				//swap them
				tmp = alpha[i];
				alpha[i] = alpha[j];
				alpha[j] = tmp;
			}
		}
	}
	
	printf("%s",alpha);
	
	system("PAUSE");
	return 0;
}
