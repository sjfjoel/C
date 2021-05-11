// Perfect number checking
/*
	Sum of any number's factors except itself is equals to the same number.
	number = 6
	numbers 1 to 6           ( 1 2 3  4  5  6)
	factors number%6         ( 0 0 0 !0 !0  except 6)
	here 6 has 3 factors     ( _ _ _         ) 1,2,3
	sum of factors             1+2+3    => 6
	number == sum of factors  => 6 == 6
	so 6 is a perfect number.
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int range, n, i, sum, temp;
	clrscr();
	printf("Enter the range : ");
	scanf("%d",&range);

	printf("The perfect numbers in the range %d\n",range);
	for(n=1; n<=range; n++)
	{
		sum = 0;
		temp = n;
		for(i=1; i<n; i++)
		{
			if(n%i == 0)
			{
				sum = sum + i;
			}
		}
		n = temp;
		if(n == sum)
		{
			printf("\t\t%d\n",n);
		}
	}
	getch();
}