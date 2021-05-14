// printing pattern
/*
	* * * * *     5 4 3 2 1   5 5 5 5 5
	* * * *       4 3 2 1     4 4 4 4
	* * *         3 2 1       3 3 3
	* *           2 1         2 2
	*             1           1
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i, j;
	clrscr();

	for(i=5; i>=1; i--)
	{
		for(j=i; j>=1; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=5; i>=1; i--)
	{
		for(j=i; j>=1; j--)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	for(i=5; i>=1; i--)
	{
		for(j=i; j>=1; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}