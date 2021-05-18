// Pointer to the function
/*
	create pointer to the function
	syntax:
		return type (*identity)(arg_list);
	ex:
		int (*ptr)(int, int);
		can points to any function which takes 2 int args and returns int.

	if we declare without(), like *ptr
		int *ptr (int, int);
		system consider this like
		int* ptr(int, int);
		this is dangling pointer
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int r1, r2, r3;
	int (*ptr)(int, int);
	clrscr();

	r1 = add(20, 50);
	r2 = mul(2, 3, 4);
	printf("R1 is %d\nR2 is %d\n", r1, r2);
	ptr = &add;
	r3 = (ptr)(20, 20);
	printf("R3 is %d", r3);

	getch();
}
int add(int x, int y)
{
	int z = x+y;
	return z;
}
int mul(int x, int y, int z)
{
	int w= x*y*z;
	return w;
}