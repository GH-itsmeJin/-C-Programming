#include<stdio.h>
#include<math.h>

double power();

double power(double n)
{
    int p;
    printf("Enter a Power of a number: \n");
    scanf("%d", &p);

    printf("Power of a Number = %f", pow(n, p));
    return 0;
}

int main()
{
    int n;
    printf("Power Function \n");
    printf("Enter a Number: \n");
    scanf("%d", &n);

    power(n);
}