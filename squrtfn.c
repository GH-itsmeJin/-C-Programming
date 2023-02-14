#include<stdio.h>
#include<math.h>

double squrt(double n)
{
    printf("Square Root of a Number\n");
    
    printf("Square Root = %f", sqrt(n));
    return sqrt(n);
}

float main()
{
    int n;
    
    printf("Enter a Number: \n");
    scanf("%d", &n);

    squrt(n);
}