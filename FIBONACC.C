// Fibonacci series
// Adding subsequent values

/*
	a=0, b=1, c=a+b.
	  0    1    1    2 3 5 8 13 21 ...
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int limit, i, a=0, b=1, c;
	clrscr();
	printf("Enter the limit : ");
	scanf("%d",&limit);  // how many iteration needed

	for(i=1; i<=limit; i++)
	{
		printf("%d \t",a);
		c= a+b;
		a=b;
		b=c;
	}

	getch();
}

