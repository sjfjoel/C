// Armstrong number.
// Sum of a given digit's individual digit's cube is equal to the given digits.

/*
   number              153.
   cube of individual  (1*1*1) (5*5*5) (3*3*3).
   sum                    1   +  125  +   27   => 153.
   number==sum     =>  153 == 153.
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int number, reminder, temp, sum=0;
	clrscr();
	printf("Enter the number : ");
	scanf("%d",&number);

	temp = number;
	while(number>0)
	{
		reminder = number%10;
		sum = sum + (reminder*reminder*reminder);
		number = number/10;
	}
	number = temp;
	if(number == sum)
	{
		printf("%d is an armstrong number",number);
	}
	else
	{
		printf("%d is not an armstrong number",number);
	}
	getch();
}