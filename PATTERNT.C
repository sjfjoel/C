// Printing triangle pattern
/*
	     *
	    ***
	   *****
	  *******
	 *********
	***********
*/
#include<stdio.h>
#include<conio.h>
main()
{
	int numberOfRows, i, j, k, c=80;  // the console can accomadate only 80 char horzontal.
	clrscr();
	printf("Enter the number of rows to be printed : ");
	scanf("%d", &numberOfRows);            // Sample input 22
	for(i=1; i<=numberOfRows; i++)
	{                                      // center of console is 40
		for(j=1; j<=((c/2)-i); j++)    // so (c/2-i) 80/2-i, if = 1, spaxe should be printed for 39 times,
		{                              // then the star should be printed
			printf(" ");           // For triangle 1 star in 1st row, 3 stars in 2nd row, 5 in 3rd . . .
		}                              // 2*i-1 if i=1, 2*i+1 if i = 0; to get number of stars to be printed.
		for(k=1; k<=((2*i)-1); k++)
		{
			printf("*");
		}
		printf("\n");
	}

	getch();
}