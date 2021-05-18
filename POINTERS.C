// Pointer - sizeof()
/*
	compiler		int		pointer
	16 bit			2 bytes		2 bytes
	32 bit			4 bytes		4 bytes

	it contains only the address, so it might be only 2 or 4 bytes.
*/

#include<stdio.h>
#include<conio.h>
struct Emp
{
	int eno;
	char ename[20];
	float esal;
}
main()
{
	char* cp;
	int* ip;
	struct Emp* sep;
	clrscr();

	printf("Size of char is %d byte(s)\n",sizeof(cp));
	printf("Size of int is %d byte(s)\n",sizeof(ip));
	printf("Size of struct Emp is %d byte(s)\n",sizeof(sep));

	getch();
}