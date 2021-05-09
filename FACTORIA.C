// Find the factorial of the given number
/*
   factorial of 5
	we have two ways
	1 => 1*2*3*4*5
	2 => 5*4*3*2*1
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int n, i, factorial=1;
	clrscr();

	printf("Enter the value \"N\" to be calculated\n");
	scanf("%d",&n);

	// way 1
	for (i=1; i<=n; i++)
	{
		factorial = factorial * i;
	}
	printf("factorial value by 1 to N is %d\n",factorial);

	// way 2
	factorial=1; // to clear the previous value made by way 1

	for (i=n; i>=1; i--)
	{
		factorial = factorial * i;
	}
	printf("factorial value by N to 1 is %d",factorial);

	getch();
}