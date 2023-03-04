#include<stdio.h>

int main()
{
    char ch;
    printf("Character is Digit or not?! \n");
    printf("Enter a Character : \n");
    scanf("%c",&ch);
    
    if(ch>='0' && ch<='9')
    {
        printf("It's a Digit!");
    }
    else
    {
    printf("No, It's not a Digit!");
    }
}