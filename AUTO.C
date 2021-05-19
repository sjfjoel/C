// Automatic storage class
/*
	key word 	- auto
	memory location - RAM
	default value	- Garbage value
	Scop & life	- inside declared block or method (life)
			  only with in the block or method (scope)

*/
#include<stdio.h>
#include<conio.h>
void main()
{
	auto int a = 10;
	clrscr();
	{
		auto int a;
		printf("Block - a : %d\n", a);
	}
	printf("method - a : %d", a);
}