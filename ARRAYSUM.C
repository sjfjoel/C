// Sum of an array elements
// get the values by the index position the add into the variable sum.

#include<stdio.h>
#include<conio.h>
main()
{
	int array[5] = {10, 20, 30, 40, 50}, i, sum = 0;
	clrscr();

	for(i=0; i<5; i++)
	{
		sum = sum + array[i];
	}

	printf("sum of an array is  %d",sum);

	getch();

}