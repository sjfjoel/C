// typedef - can be used for complex data types and simplify it.
// c has no string data type

#include<stdio.h>
#include<conio.h>

typedef char* String;
String read();  // char* read();
void main()
{
	String name; // char* name;
	clrscr();
	name = read();
	printf("%s",name);
}
String read() // char* read()
{
	String name; // 	char* name;
	printf("Enter name : ");
	gets(name);
	return name;
}