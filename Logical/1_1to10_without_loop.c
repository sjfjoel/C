// print 1 to 10 without using any loop
#include<stdio.h>
int main(){
    int i=0;
    start:
    i++;
    printf("%d\n",i);
    if(i<10){
        goto start;
    }
    return 0;
}