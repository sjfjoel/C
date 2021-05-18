//String - concadinate without built in function

#include<stdio.h>
#include<conio.h>
int lenght(char[]);
char merge(char[], char[]);
main()
{
	char firstWord[50], secondWord[50];
	int  firstWordLength, secondWordLength;
	clrscr();

	printf("Enter the first word : ");
	gets(firstWord);
	printf("Enter the second word : ");
	gets(secondWord);
//	firstWordLength = length(firstWord);
//	secondWordLength = length(secondWord);
//	printf("Length of %s - %d\nLength of %s - %d",firstWord,firstWordLength,secondWord,secondWordLength);

	merge(firstWord, secondWord);

	getch();
 //	return 0;
}

//merge the words
char merge(char fW[], char sW[])
{
	int i, fWL = 0, sWL = 0;

	fWL = length(fW);
	sWL = length(sW);

	for(i=0; i<sWL; i++)
	{
		fW[fWL+i] = sW[i];
	}
       //	fflush(stdin);
	printf("Length of %s - %d\nLength of %s - %d", fW, fWL, sW, sWL);
	printf("\nMerged word is : %s",fW);

}

//find the length of the string
int length(char x[])
{
	int count=0;
	while(x[count] != '\0')
	{
		count++;
	}
	return count;
}
