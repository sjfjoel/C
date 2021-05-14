// Printing star pattern
/*
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i, j;
	clrscr();                       // another way

	for(i=1; i<=5; i++)             // for(i=5; i>=1; i--)
	{
		for(j=1; j<=5; j++)     // for(j=5; j>=1; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}