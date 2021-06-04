// swap two integer values without using temprory variable
#include<stdio.h>
int main(){
    int a=10,b=20;
    printf("Before swap : A=%d, B=%d\n", a, b);

    a = a+b;
    b = a-b;
    a = b-a;
    
    printf("After swap : A=%d, B=%d\n", a, b);
    return 0;
}