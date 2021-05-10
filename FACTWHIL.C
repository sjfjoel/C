// Factorial of a number using while_loop

#include<stdio.h>
#include<conio.h>
main()
{
	int input, factorial=1, temp;
	clrscr();
	printf("Enter the number to find factorial : ");
	scanf("%d",&input);
	temp=input;
	while(input>0)
	{
	   factorial = factorial*input;
	   input--;
	}
	input=temp;
	printf("factorial of %d is %d",input,factorial);

	getch();
}