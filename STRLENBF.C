// String length counting
#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
	char name[20];
	int length=0;
	clrscr();
	printf("Enter the name : ");
	gets(name);

	length = strlen(name);

	printf("\n\n\t\tLength of '%s' is %d characters.",name,length);

	getch();
}