//arithmetic operation using function
//lets take a srtudent mark statement
#include<stdio.h>
#include<conio.h>
void main()
{
	float language, math, science, computerScience, total, avg;
	float totalMarks(float, float, float, float);
	float averageMarks(float);
	clrscr();
	total = totalMarks(language, math, science, computerScience);
	avg =averageMarks(total);
	printf("Total marks : %f\n",total);
	printf("Average marks : %f\n",avg);
	getch();
}
float totalMarks(float lang, float math, float sci, float cs)
{
	printf("enter the language marks : ");
	scanf("%f",&lang);
	printf("enter the math marks : ");
	scanf("%f",&math);
	printf("enter the science marks : ");
	scanf("%f",&sci);
	printf("enter the computer science marks : ");
	scanf("%f",&cs);
	return (lang + math + sci + cs);
}
float averageMarks(float total)
{
	return(total/4);
}
