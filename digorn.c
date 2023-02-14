#include<stdio.h>

int main()
{
    char ch;
    printf("Character is digit or not \n");
    printf("Enter a Character: \n");
    scanf("%c", &ch);

    if(ch>='0' && ch<='9')
    {
        printf("Charater is a digit \n");
    }
    else
    {
        printf("Not a Digit \n");
    }
}