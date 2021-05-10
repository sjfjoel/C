// Palindrome - Check whether a number is polindrome or not
// Palindrome is number equals to its reversed number. like, 121(abc) == 121(cba).
#include<stdio.h>
#include<conio.h>
main()
{
	int number,temp,reminder,reversedNumber=0;
	clrscr();
	printf("Enter the number : ");
	scanf("%d",&number);
	temp=number;
	while(number>0)
	{
		reminder = number%10;
		reversedNumber = (reversedNumber*10) + reminder;
		number = number/10;
	}
	number=temp;
	if(number == reversedNumber)
	{
		printf("The given number( %d ) is palindrome \n Given => %d, Reversed => %d ",number,number,reversedNumber);
	}
	else
	{
		printf("The given number( %d ) is not palindrome \n Given => %d, Reversed => %d ",number,number,reversedNumber);
	}
	getch();
}