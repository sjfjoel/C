// contains predefined variables
// Global - accessed in any c programs
// they are Constants

/*
		short      int         long   	  char

   signed       SHRT_MIN   INT_MIN     LONG_MIN   CHAR_MIN
		SHRT_MAX   INT_MAX     LONG_MAX   CHAR_MAX

   unsigned	USHRT_MAX  UINT_MAX    ULONG_MAX  UCHAR_MAX  it has no min value, starts from 0.
*/
#include<stdio.h>
#include<conio.h>
#include<limits.h>
void main()
{
clrscr();
printf("Short can have %d to %d\n unsigned short can have 0 to %u\n",SHRT_MIN,SHRT_MAX,USHRT_MAX);
getch();
}