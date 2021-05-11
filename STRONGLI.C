// Strong number for given range
// Sum of given number's individual number's factorial is equal to the given number.
// strong numbers are 1, 2, 145, 40585
/*
   take 	145
   factorial    1!  4!  5!  is = 145.
   sum o fact   1+  24+ 120    = 145.
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int range, n, i, reminder, factorial, sum, temp;
	clrscr();
	printf("Enter the range : ");
	scanf("%d",&range);
	printf("Strong numbers between 1 and %d are \n",range);

	for(n=1; n<=range; n++)
	{
		//temp = n;
		sum = 0;
		while(n>0)
		{
			reminder = n%10;
			factorial = 1;
			for(i=1; i<=reminder; i++)
			{
				factorial = factorial * i;
			}
			sum = sum + factorial;
			n = n/10;
		}

		//n = temp;

		if(n == sum)
		{
			printf(" \n \t \t %d", n);
		}
		/*else
		{
			printf(" %d is not strong", n);
		}  */
	}
	getch();
}