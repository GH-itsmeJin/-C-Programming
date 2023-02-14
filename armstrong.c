#include<stdio.h>

int main()
{
    int n, temp, r, s=0; //r for reversing, s for sum & temp for temporary storage
    printf("Number is Armstrong or Not \n");
    printf("Enter a Number: \n");
    scanf("%d", &n);
    
    temp=n; //Storing Number for If Condition

    while(n>0) //Armstrong Number
    {
        r=n%10; //reversing of a number
        s=s+(r*r*r); //Sum of a cube
        n=n/10; //Used process remaining digits
    }

    if(temp==s)
    {
        printf("%d, Armstrong Number \n", s);
    }
    else
    {
        printf("%d, Not a Armstrong Number \n", s);
    }
}