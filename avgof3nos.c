#include<stdio.h> 

int main() 
{
    int a,b,c;
    float avg=0.0;
    printf("Average of Three Numbers \n"); 
    printf("Enter a First Number : \n"); 
    scanf("%d", &a); 
    printf("Enter a Second Number : \n");
    scanf("%d", &b); 
    printf("Enter a Third Number : \n");
    scanf("%d", &c);

    avg=(a+b+c)/3;
    printf("Solution to the Equation : %f \n", avg); 
}
