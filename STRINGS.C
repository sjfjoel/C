// Strings in c
/*
	internal pointer
	syntax : char name[20];
	if size 20, can store 19 char only, 20th will be null char '\0'.
	no need to use iterator(loops).

*/

#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char name[20], nameLname[30];
	clrscr();

	printf("Enter the name : ");
	scanf("%s",name);             // no need to use & while read the string.
	printf("\n\t\tHello %s",name);

	fflush(stdin);       //	clear the buffer value

	printf("\n\nEnter Name and Last Name : ");
	gets(nameLname);   //scanf will consider a space as null char, gets() reads char untill the user press enter key.
	printf("\n\t\tHello %s",nameLname);

	getch();
}

