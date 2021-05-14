// Printing  a pattern
/*
		*
	      * *
	    * * *
	  * * * *
	* * * * *
*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i, j, k;
	clrscr();

	for(i=1; i<=5; i++)
	{
		for(j=i; j<5; j++)
		{
			printf("  ");
		}
		for(k=i; k>=1; k--)
		{
			printf("* ");
		}

		printf("\n");
	}
	getch();
}
