// Union - it share the memory for all the elements it has

#include<stdio.h>
#include<conio.h>
union mark
{
	short tamil;
	short english;
};

void main()
{
	union mark m;
	clrscr();

	m.tamil = 10;
	printf("Tamil mark is %d\n", m.tamil);
	//english mark is not initialized
	printf("English mark is %d\n", m.english);

	m.english=20;
	printf("Tamil mark after entered englsh is %d\n", m.tamil);

	getch();
}