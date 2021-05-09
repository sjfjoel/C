// Priority for modify operator in c
#include<stdio.h>
#include<conio.h>
main()
{
	int a=5;
	clrscr();
	a = a+++a;
	/*	a = a++ + a; => 5++ + 5; => 10++  => 11.
		the first two + symbol will be taken by the system,
		because modify operator has high priority than arithmetic operators.*/
	printf(" variable a's value is %d",a);
	getch();
}