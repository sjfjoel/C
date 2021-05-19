// DMA - malloc()
/*
	malloc() is to structure
	on succes - it returns the base address of memory block.
	on failure - it returns NULL pointer.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student
{
	int rno;
	char name[20];
	int total;
};
void main()
{
	struct student* ptr;

	clrscr();

	ptr = (struct student*) malloc(sizeof(struct student));
	if(ptr == NULL)
	{
		printf("Out of memory error");
	}
	else
	{
		printf("Enter the student roll number : ");
		scanf("%d", &ptr->rno);
		printf("Enter the student name : ");
		scanf("%s", ptr->name);
		printf("Enter the student total marks : ");
		scanf("%d", &ptr->total);

		printf("\nGiven student details are :\nRoll number : %d\nName : %s\nTotal marks : %d ", ptr->rno, ptr->name, ptr->total);
	}

	getch();
}