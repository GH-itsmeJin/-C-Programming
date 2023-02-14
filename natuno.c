#include<stdio.h>

int main()
{
    int n;
    printf("Natural Number \n");
    printf("Enter a Number: \n");
    scanf("%d", &n);
    
    if(n>=0)
    {
        printf("%d, Natural Number", n);
    }
    else
    {
        printf("%d, Not a Natural Number", n);
    }
}