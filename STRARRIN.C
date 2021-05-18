//can contains collection of different data types

#include<stdio.h>
#include<conio.h>
main()
{
	struct Student
	{
		int sno;
		char sname[20];
		int smarks[4];
	};
	struct Student s[3];
	int i, j;
	clrscr();


	printf("Enter the Student details\n");
	for(i=0; i<3; i++)
	{
		printf("Enter %d Student number : ", i+1);
		scanf("%d",&s[i].sno);
		printf("Enter %d Student name : ", i+1);
		scanf("%s", s[i].sname);
		printf("Enter %d Student marks :\n ", i+1);
		for(j=0; j<4; j++)
		{
			printf("\tEnter subject %d of Student : ", j+1);
			scanf("%d", &s[i].smarks[j]);
		}
		printf("\n");
	}

	printf("Given Student details");
	for(i=0; i<3; i++)
	{
		printf("\nStudent [%d] number : %d", i+1 ,s[i].sno);
		printf("\nStudent [%d] name : %s", i+1, s[i].sname);
		printf("\nStudent [%d] mark ", i+1);
		for(j=0; j<4; j++)
		{
			printf("\n\tSubject %d mark : %d", j+1, s[i].smarks[j]);
		}
		printf("\n");
	}

	getch();
}