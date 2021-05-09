// Sum of digits

#include<stdio.h>
#include<conio.h>
main()
{
	int n,reminder,sum=0;
	clrscr();
	printf("Enter digits ");
	scanf("%d",&n);

	while(n>0)
	{
		reminder = n%10;    // to get the last digit
		sum = sum+reminder; // add the last digit with sum
		n = n/10;	    // to remove the zero from N
	}
	printf("\nsum of the given number/digits is %d",sum);

	getch();
}