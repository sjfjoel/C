// prime number
// A number which is having only two factors is prime
/*
    take              7         has(1 to 7)
    7  %        1|2|3|4|5|6|7   = 0 is a factor
    0 or N      0|n|n|n|n|n|0    count zeros = 2
    it has two factors, so that it is prime.

*/

#include<stdio.h>
#include<conio.h>
main()
{
	int input, i, count=0;
	clrscr();
	printf("Enter the number : ");
	scanf("%d",&input);
	for(i=1; i<=input; i++)
	{
		if(input%i == 0	)
		{
			count++;
		}
	}
	if(count == 2)
	{
		printf("Given number( %d ) is prime",input);
	}
	else
	{
		printf("Given number( %d ) is not prime",input);
	}
	getch();
}