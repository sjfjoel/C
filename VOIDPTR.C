// single void pointer for diffrent datatype
#include<stdio.h>
#include<conio.h>
int i; float f; char c;
void* vp;
void main()
{
	clrscr();
	vp = &i;
	*(int*) vp=1;
	printf("i is %d\n",i);
	vp = &f;
	*(float*) vp=2.12;
	printf("f is %.2f\n",f);
	vp = &c;
	*(char*) vp= 'j';
	printf("c is %c",c);

}