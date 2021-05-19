// typedef - array also can be declared
#include<stdio.h>
#include<conio.h>
main()
{
	typedef int array[5];
	int i;
	array x = {10, 20, 30, 40, 50};
	clrscr();


	printf("The given array values are : ");

	for(i=0; i<5; i++)
	{
		printf("%d\t", x[i]);
	}
}