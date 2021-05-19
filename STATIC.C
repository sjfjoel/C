// Static storage class
/*
	key word 	- static
	memory location - Data segment (as like global variable)
	default value	- 0
	Scop & life	- inside declared block or method (life)
			  untill the program ends (scope)

*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=0; i<10; i++)
	{
		foo();
	}
}
foo()
{
	int a = 10;
	static int sa = 10;
	a += 5;
	sa += 5;
	printf("Normal int A : %d, Static int SA : %d\n", a, sa);
}