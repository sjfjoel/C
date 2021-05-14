// Largest element of an array
/*
	store the first element of array in vaiable(large),
	compare it with all other elements,
	if any larger element is found, replace the value in variable(large)
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int array[10] = {12, 68, 65, 29, 78, 59, 81, 83, 98, 91}, large = array[0], i;
	clrscr();

	for(i=1; i<11; i++)
	{
		if(large < array[i])
		{
			large = array[i];
		}
	}
	printf("The largest element of array is %d",large);

	getch();
}