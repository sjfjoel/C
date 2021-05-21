// Array -  duplicate an array using pointer
#include<stdio.h>
#include<conio.h>
main()
{
	int arr1[5] = {10, 20, 30, 40, 50}, arr2[5], i;
	for(i=0; i<5; i++)
	{
		arr2[i] = *(arr1+4-i); //address of arr1+4-i(0+4-0) 4 is the index(0,1,2,3,4), can fetch the 5th element.
		printf("arr1 %d, arr2 %d\n", arr1[i], arr2[i]);
	}
}