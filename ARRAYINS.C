// Insert an element into an array

/*
	Get the element value to be inserted as key
	Get the location to be inserted as location
	now shift the values from desired location
	then replace the locations value with key
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int array[50], size, i, key, location;
	clrscr();

	printf("Enter the array size : ");
	scanf("%d",&size);
	printf("\nEnter the array values \n");
	for(i=0; i<size; i++)
	{
		printf("value of array[%d] :",i);
		scanf("%d",&array[i]);
	}

	printf("\nArray is : ");
	for(i=0; i<size; i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\n\nEnter the value to be inserted : ");
	scanf("%d", &key);
	printf("\nEnter the location to be inserted : ");
	scanf("%d", &location);

	//shift the values
	for(i=size-1; i>=location; i--)
	{
		array[i+1]  = array[i];
	}
	array[location] = key;

	printf("\n\nThe array after inserted an value : ");
	for(i=0; i<size+1; i++)
	{
		printf("%d\t", array[i]);
	}

	getch();
}