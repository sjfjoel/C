// Array simple program - read and print operations

#include<stdio.h>
#include<conio.h>
main()
{
	int array[5], i;
	clrscr();

	//read
	for(i=0; i<5; i++)
	{
		printf("Enter the array[%d]'s value : ",i);
		scanf("%d",&array[i]);
	}

	//print
	printf("\nArray is :   ");
	for (i=0; i<5; i++)
	{
		printf("%d  ",array[i]);
	}

	getch();
}