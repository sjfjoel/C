// String revers - without built in

#include<stdio.h>
#include<conio.h>
char reverse(char[]);
void main()
{
	char word[30], reversed[30];
	clrscr();

	printf("Enter word to reverse : ");
	scanf("%s", word);

	reverse(word);

	getch();
}

char reverse(char x[])
{
	int i=0, j = stringLength(x)-1;
	char temp;

	printf("Given word is : %s \n", x);

	while(i<j)
	{
		temp = x[i];
		x[i] = x[j];
		x[j] = temp;
		i++;
		j--;
	}
	printf("reversed word is : %s",x);

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