// Pointer
/*
	points to the location
	& - address of the variable
	* - value of the address
	int *a; or int* a;
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i = 100;
	int* ptr;
	ptr = &i;
	clrscr();

	printf("i is %d\n",i);
	printf("ptr is %u\n",ptr);
	printf("address of i %u\n",&i);
	printf("address of ptr %u\n", &ptr);
	printf("value of ptr's address %d\n",*ptr);
	printf("value of address of i %d\n",*(&i));

	getch();
}