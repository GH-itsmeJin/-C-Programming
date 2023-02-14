#include<stdio.h>  //Header File

int main() //Main Function
{
    int n,c=0; //Variable Declaration
    printf("Cube of a Number \n");

    printf("Enter a Number: \n"); //Taking Number from a user
    scanf("%d", &n);

    c=(n*n*n); //Calculation of Cube 

    printf("Cube of a Number:%d \n", c); //Print the cube
}