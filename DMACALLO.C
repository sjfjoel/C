// calloc() - allocate memories to array
// can't increse or decrease the size of array.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int sizeOfArray, *arr, i;
	clrscr();

	printf("Enter the array size : ");
	scanf("%d",&sizeOfArray);

	arr = (int*) calloc(sizeOfArray, sizeof(int));
	if(arr == NULL)
	{
		printf("Out of memory");
	}
	else
	{
		printf("Enter Array values  : ");
		for(i=0; i<sizeOfArray; i++)
		{
			printf("\nEnter value %d : ", i);
			scanf("%d", &(*(arr+i)));
		}
		printf("\nArray values are : ");
		for(i=0; i<sizeOfArray; i++)
		{
			printf("%d\t", *(arr+i));
		}
	}

	getch();
}