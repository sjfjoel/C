// Find big among three elements using a single line
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a, b, c value : ");
    scanf("%d%d%d",&a,&b,&c);
    // conditional operator inside a conditional operator
    a>b && a>c ?printf("A(%d) is big",a): b>a&&b>c?printf("B(%d) is big",b):printf("C(%d) is big",c);
    return 0;
}