#include<stdio.h>

int main()
{
    int n1, n2;
    printf("Smallest Number \n");
    printf("Enter A First Fumber: \n");
    scanf("%d", &n1);
    printf("Enter a Second Number: \n");
    scanf("%d", &n2);

    if(n1<n2)
    {
        printf("%d, First Number is Smallest\n", n1);
    }
    else if(n1>n2)
    {
        printf("%d, Second Number is Smallest \n", n2);
    }
    else
    {
        printf("Both, Are equal!");
    }
}