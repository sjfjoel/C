// Simple for loop program
#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();
	for(i=0;i<=5;i++)   //it iterstes till i becomes 5
	{
		printf("i value is : %d\n", i); //printing statment
	}
	printf("\ni value at the termination of for loop : %d", i); // when i becomes 6, loop will be terminated "(6<=5)".
	getch();
}