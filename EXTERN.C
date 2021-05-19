// Extern storage class
/*
	key word 	- extern
	memory location - data segment
	default value	- 0
	Scop & life	- till program ends (life).
			  entire program (scope).


*/
#include<stdio.h>
#include<conio.h>
int y = 20;

void main()
{
	int x = 10;
	extern int y;
	clrscr();
	y++;
	printf("X is : %d\n", x);
	printf("Y is : %d", y);
}


