// Register storage class
// Register memory is very small (8KB / 16KB).
// Using register for only required variable like loop counter is better.
/*
	key word 	- register
	memory location - CPU register
	default value	- Garbage value
	Scop & life	- inside declared block or method (life)
			  only with in the block or method (scope)

*/
#include<stdio.h>
#include<conio.h>
void main()
{
	register int i, sum = 0;
	int n;
	clrscr();

	printf("Enter range to get sum : ");
	scanf("%d", &n);
	for(i=0; i<=n; i++)
	{
		sum = sum+i;
	}
	printf("Sum of 0 to %d is %u", n, sum);

}