// typedef - we can set an alias name for data types;
/*
	typedef datatype <alias name>
	typedef int my_int      - here my_int is duplicate name of int, it will not take any memory.
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	typedef int my_int;
	my_int a = 10, b = 20, c;
	clrscr();
	c = a + b;
	printf("%d",c);
}