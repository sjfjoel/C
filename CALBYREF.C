// call by reference
// will affect the called function

#include<stdio.h>
#include<conio.h>
void swap(int*, int*);
void main()
{
	int a, b;
	clrscr();

	printf("Enter A value : ");
	scanf("%d",&a);
	printf("Enter B value : ");
	scanf("%d",&b);
	printf("Before swap :\nA is %d\nB is %d\n", a, b);
	swap(&a,&b);
	printf("Calling(main) function value : A is %d, B is %d", a, b);

	getch();
}
void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("After swap : \nCalled(swap) function value : A is %d, B is %d\n", *x, *y);
}