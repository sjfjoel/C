//Find area of rectangle
#include<stdio.h>
#include<conio.h>
main()
{
float areaRect(float, float, float);          //function prototype
float l, b, h, result;//l-lenght, b-breath, h-height.
clrscr();
result = areaRect(l, b, h); //function call
printf("The area of rectangle is : %f",result);

}
float areaRect(float lenght, float breath, float height)
{
printf("Enter lenght : ");
scanf("%f",&lenght);
printf("Enter breath : ");
scanf("%f",&breath);
printf("Enter height : ");
scanf("%f",&height);
return(lenght * breath * height);
}