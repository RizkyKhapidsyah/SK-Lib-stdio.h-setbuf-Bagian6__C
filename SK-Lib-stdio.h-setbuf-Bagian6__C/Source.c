#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	char buf[50];

	setbuf(stdout, buf);
	printf("Hello"); //The buffer contains "Hello" 
	//but nothing is written to stdout yet
	fflush(stdout);  //Now "Hello" is written to stdout

	setbuf(stdout, NULL);
	printf(" World!"); //" World!" is written to stdout
	//there is no buffering

	_getch();
	return 0;
}