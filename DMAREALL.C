// realloc()  -  it used to increase or decrease the size of array

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int capacity = 5, *stack, i;
	clrscr();

	stack = (int*) calloc (capacity, sizeof(int));

	capacity++;
	stack = (void*) realloc (stack, capacity * (sizeof(int)));
	if(stack == NULL)
	{
		printf("Out of memory");
	}
	else
	{
		printf("The array values are : ");
		for(i=0; i<capacity; i++)
		{
			printf("%d\t", *(stack+i));
		}

	}

	getch();
}