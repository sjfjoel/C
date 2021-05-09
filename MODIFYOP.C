//modify(inc/dec) opatrator program
#include<stdio.h>
#include<conio.h>
main()
{
	int a=2, b=3;
	clrscr();

	/*
	    working flow of modify operators
		1.Pre inc\dec,
		2.Substitute,
		3.Evaluate,
		4.Assignment,
		5.Post inc/dec.
	*/

	b = a++ + b--;
	printf("a is : %d, b is : %d.\n",a,b);
	a =  a-- + ++b;
	printf("a is : %d, b is : %d.\n",a,b);
	b = ++a + --b;
	printf("a is : %d, b is : %d.\n",a,b);
	getch();
}