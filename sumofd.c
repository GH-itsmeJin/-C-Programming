#include<stdio.h>

int sumofd()
{
    int n,rev,s=0;
    printf("Sum of Digits \n");
    printf("Enter a Number: \n");
    scanf("%d", &n);

    while(n>0)
    {
        rev=n%10;
        s=s+rev;
        n=n/10;
    }

    printf("Sum of digits = %d", s);
    return 0;
}

void main()
{
    sumofd();
}

