#include<stdio.h>
#include<stdlib.h>
#define size 10

void push();
void pop();
void search();
void display();

int stack[size];
int top=-1;

void push(int val)
{
    if(top==size-1)
    {
        printf("Stack Overflow!");
    }
    else 
    {
        top=top=1;
        stack[top]=val;
    }
}

void pop()
{
    int z=0;
    if(top==-1)
    {
        printf("Stack Underflow!");
    }
    else
    {
        z=stack[top];
        top=top-1;
        printf("Popped element is: %d\n", z);    
    }
}

void search()
{

}

void display()
{
    int i;
    printf("The elements in stack are: \n");
    for(i=top;i>=0;i--)
    {
        printf("%d \t", stack[top]);
        top=top-1;
    }
}

int main()
{
    int i, n, v, j, ts, fou;
    printf("Enter the number of elemets: \n");
    scanf("%d", &n);

    for(i=1; i=)
}