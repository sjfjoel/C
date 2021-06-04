// Find largest element among the given elements  without using an array
#include<stdio.h>
int main(){
    int n, i, large=0, element;
    printf("Enter number of elements to be checked : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {   
        printf("Element %d : ",i);
        scanf("%d",&element);
        if(element>large)
        {
            large = element;
        }
    }
    printf("Largest element is : %d", large);
    return 0;
}