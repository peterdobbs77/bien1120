/*
In Class Challenge 2
This program prints three different phone numbers
Uses a whole bunch of printf statements
Author Peter Dobbs
Created: September 2015
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	//variable declaration
	char *phoneNum1 = "(123) 456-7890";
	char *phoneNum2 = "(098) 765-4321";
	
	printf("%s\n", phoneNum1);
	printf("%s\n", phoneNum2);
	
	//phoneNum1
	int areaCode1, prefix1, suffix1;
	areaCode1 = 414;
	prefix1 = 774;
	suffix1 = 9878;
	//phoneNum2
	int areaCode2, prefix2, suffix2;
	areaCode2 = 414;
	prefix2 = 429;
	suffix2 = 6622;
	
	//phoneNum1
	printf("(%d", areaCode1);
	printf(") %d", prefix1);
	printf("-%d\n", suffix1);
	//phoneNum2
	printf("(%d", areaCode2);
	printf(") %d", prefix2);
	printf("-%d\n", suffix2);
	
	//phoneNum3
	int areaCode3, prefix3, suffix3;
	areaCode2 = 8;
	prefix2 = 99;
	suffix2 = 199;
	//phoneNum3
	printf("(60%d", areaCode3);	//accounts for leading zeros
	printf(") 9%d", prefix3);
	printf("-0%d\n", suffix3);	//accounts for leading zeros
	
	system("PAUSE");
	return 0;
}
