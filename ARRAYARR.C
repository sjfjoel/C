// Insert an element into an array

/*
	Get the array values to be inserted as key
	Get the location to be inserted as location
	now shift the values from desired location
	then replace the locations value with key
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int arrayMain[50], arrayKey[50], i, sizeMain, sizeKey, location = 0;
	clrscr();

	//array 1
	printf("Enter the 1st array size : ");
	scanf("%d",&sizeMain);

	printf("\nEnter the 1st array values :\n");
	for(i=0; i<sizeMain; i++)
	{
		printf("Value of array[%d] : ",i);
		scanf("%d",&arrayMain[i]);
	}

	//array 2
	printf("\nEnter the 2nd array size : ");
	scanf("%d",&sizeKey);

	printf("\nEnter the 2nd array values :\n");
	for(i=0; i<sizeKey; i++)
	{
		printf("Value of array[%d] : ",i);
		scanf("%d",&arrayKey[i]);
	}

	printf("\n\nFirst array is :  ");
	for(i=0; i<sizeMain; i++)
	{
		printf("%d\t",arrayMain[i]);
	}

	printf("\n\nSecond array is :  ");
	for(i=0; i<sizeKey; i++)
	{
		printf("%d\t",arrayKey[i]);
	}

	printf("\n\nEnter the location to be inserted : ");
	scanf("%d",&location);

	// shift elements
	for(i=sizeMain-1; i>=location; i--)
	{
		arrayMain[i+sizeKey] = arrayMain[i];
	}
	// replace elements
	for(i=0; i<sizeKey; i++)
	{
		arrayMain[location+i] = arrayKey[i];
	}

	printf("\nThe final array is : ");
	for(i=0; i<sizeMain+sizeKey; i++)
	{
		printf("%d  ",arrayMain[i]);
	}

	getch();

}

