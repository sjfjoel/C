// Strong number
// Sum of given number's individual number's factorial is equal to the given number.

/*
   take 	145
   factorial    1!  4!  5!  is = 145.
   sum o fact   1+  24+ 120    = 145.
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int input, i, reminder, factorial, sum=0, temp;
	clrscr();
	printf("Enter the number : ");
	scanf("%d",&input);
	temp = input;

	while(input>0)
	{
	   reminder = input%10;
	   factorial=1;
	   for(i=reminder; i>=1; i--)
	   {
		factorial = factorial * i;
	   }
	   sum = sum + factorial;
	   input = input / 10;
	}
	input = temp;

	if(input == sum)
	{
		printf("Given number( %d ) is strong", input);
	}
	else
	{
		printf("Given number( %d ) is not strong", input);
	}

	getch();
}