// Sum of first n numbers
#include<stdio.h>
int main(){
    int n, i = 0, sum = 0;
    printf("Enter N value : ");
    scanf("%d",&n);
    while (i<=n)
    {
        sum = sum + i++;
    }
    /*  // using for
        for(i=0; i<=n; i++)
        {
             sum = sum + i;
        }
     */

    printf("Sum is %d\n", sum);
    return 0;
}