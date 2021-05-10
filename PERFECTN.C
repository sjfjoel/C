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
	int number, i, sum=0;
	clrscr();
	printf("Enter the number : ");
	scanf("%d",&number);

	for(i=1; i<number; i++)
	{
		if(number%i == 0)
		{
			sum = sum+i;
		}
	}
	printf("sum of the given number's factors is %d\n",sum);

	if(sum == number)
	{
		printf("%d is a perfect number\n",number);
	}
	else
	{
		printf("%d is not a perfect number\n",number);
	}

	getch();
}