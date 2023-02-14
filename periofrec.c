#include<stdio.h> //Header File

int main() //Main Function
{
    int l,b,p=0; //Variable Declaration
    printf("Perimeter of a rectangle \n");

    printf("Enter a length: \n"); //Taking length from user
    scanf("%d", &l);

    printf("Enter a breadth: \n"); //Taking breadth from user
    scanf("%d", &b);

    p=2*(l+b); //Calulating Perimeter Equation

    printf("Perimeter of a rectangle:%d \n", p); //Print the Perimeter 
}