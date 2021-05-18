//can contains collection of different data types

#include<stdio.h>
#include<conio.h>
main()
{
	struct Emp
	{
		int eno;
		char ename[20];
		int esal;
	};
	struct Emp e[3];
	int i;
	clrscr();


	printf("Enter the employee details\n");
	for(i=0; i<3; i++)
	{
		printf("Enter %d employee number : ", i+1);
		scanf("%d",&e[i].eno);
		printf("Enter %d employee name : ", i+1);
		scanf("%s", e[i].ename);
		printf("Enter %d employee salary : ", i+1);
		scanf("%d", &e[i].esal);
		printf("\n");
	}

	printf("Given employee details");
	for(i=0; i<3; i++)
	{
		printf("\nEmployee [%d] number : %d", i+1 ,e[i].eno);
		printf("\nEmployee [%d] name : %s", i+1, e[i].ename);
		printf("\nEmployee [%d] salary : %d", i+1, e[i].esal);
		printf("\n");
	}

	getch();
}