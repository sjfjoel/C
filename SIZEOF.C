// sizeof()
// A function that returns the size of different things.
/*
   such as,
	variable,
	data type,
	expression,
	pointer.
*/
#include<stdio.h>
#include<conio.h>
main()
{
	char c;
	short s;
	clrscr();

	printf("Size of char is  %d byte(s)\n",sizeof(c));
	printf("Size of short is %d byte(s)\n",sizeof(s));
	printf("Size of float is %d byte(s)\n",sizeof(float));
	printf("Size of int is   %d byte(s)\n",sizeof(int));

	getch();
}