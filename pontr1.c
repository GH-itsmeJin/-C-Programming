#include<stdio.h>

int maxn(int *ptr1, int *ptr2);

int maxn(int *ptr1, int *ptr2)
{
    if(*ptr1>*ptr2)
    {
        printf("It's a Maximum Number \n");
    }
    else
    {
        printf("Not a Maximum Number");
    }
}

int main()
{
    int num1, num2, *ptr1, *ptr2;
    printf("Maximum Number Between Two NNumbers \n");
    printf("Enter a First Number : \n");
    scanf("%d", &num1);
    printf("Enter a Second Number: \n");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    maxn(ptr1, ptr2);

}