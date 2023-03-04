#include<stdio.h> 

int main() 
{
    int n1,n2;
    printf("Smallest Number of Two \n"); 
    printf("Enter a First NUmber : \n"); 
    scanf("%d", &n1);
    printf("Enter a Second Number : \n"); 
    scanf("%d", &n2); 
    if(n1<n2)
    {
        printf("First Number is Smallest! \n");
    }
    else if(n1>n2)
    {
        printf("Second Number is Smallest! \n");
    }
    else 
    {
        printf("Both Numbers are Equal! \n");
    }
}
