// reverse a given number
#include<stdio.h>
#include<conio.h>
main()
{
	int number, reverse=0, reminder, temp;
	clrscr();
	printf("Enter the number (more than one digit) : ");
	scanf("%d",&number);
	temp = number;
	while(number>0)
	{
		reminder = number % 10;            // to get last digit(divide by 10 and take the reminder).
		reverse = reverse * 10 + reminder; // add the reminder one by one by mulitiply with 10
		number = number/10;                // divide the number by 10 to remove the last digit(0).
	}
	number = temp;
	printf("Reveresed number of given number(%d) is %d",number,reverse);
	getch();
}