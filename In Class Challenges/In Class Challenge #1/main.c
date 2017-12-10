/*
In Class Challenge 1
This program displays a 9x9 sudoku table
Uses a whole bunch of printf statements
Author Peter Dobbs
Created: September 2015
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("++=====================================++\n");
	printf("|| 2 |   |   ||   |   | 3 || 8 |   |   ||\n");
	printf("||-------------------------------------||\n");
	printf("||   | 6 |   || 7 | 2 |   ||   | 1 |   ||\n");
	printf("||-------------------------------------||\n");
	printf("|| 7 |   | 8 ||   |   | 9 || 4 |   |   ||\n");
	printf("||=====================================||\n");
	printf("||   | 8 |   ||   | 6 | 4 || 7 |   |   ||\n");
	printf("||-------------------------------------||\n");
	printf("|| 5 |   | 6 || 1 |   | 7 || 2 |   | 8 ||\n");
	printf("||-------------------------------------||\n");
	printf("||   |   | 7 || 5 | 8 |   ||   | 9 |   ||\n");
	printf("||=====================================||\n");
	printf("||   |   | 3 || 9 |   |   || 1 |   | 7 ||\n");
	printf("||-------------------------------------||\n");
	printf("||   | 1 |   ||   | 7 | 6 ||   | 8 |   ||\n");
	printf("||-------------------------------------||\n");
	printf("||   |   | 5 || 8 |   |   ||   |   | 4 ||\n");
	printf("++=====================================++\n");
	
	system("PAUSE");
	return 0;
}
