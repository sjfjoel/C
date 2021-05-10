// Recursion
// A function called by itself.
/* *** Care: when a function called itself,
	     it will go in forward direction,
	     We have to take care of the backward direction,
	     Else it will lead to run time error.
	     That program has no end.

	  eg:	main()
		{
			printf("start");
			main();
			printf("end");
		}
		here the main() called itself, never come to printf("end");.
*/

// best example for recursion is finding factorial of a number.
#include<stdio.h>
#include<conio.h>
main()
{
	int factorial, inputNumber, temp;
	clrscr();
	printf("Enter the number : ");
	scanf("%d",&inputNumber);
	temp = inputNumber;
	factorial = findFactorial(inputNumber);
	inputNumber = temp;
	printf("Factorial of given number( %d ) is %d",inputNumber,factorial);

	getch();
}
int findFactorial(int n)
{
	int factorial;

	if(n == 0)
	{
		factorial = 1;
	}
	else
	{
		factorial = n * findFactorial(n-1);
	}
	return(factorial);
}