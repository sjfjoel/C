// String length - without using built in

#include<stdio.h>
#include<conio.h>
int stringLength(char[]);
main()
{
	char word[30];
	int i, length=0, count=0;
	clrscr();

	printf("Enter any word : ");
	gets(word);
	length = stringLength(word);
	printf("The lenth of '%s' is %d characters.",word,length);

	getch();
}
int stringLength(char x[])
{
	int i=0, count=0;
	while(x[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}