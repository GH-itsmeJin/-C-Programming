#include<stdio.h> //Header file

int main() //Main Function 
{
    int n,c=0; //Variable Declaration
    printf("Cube of the Number \n"); //Printing Statement 
    printf("Enter a Number : \n"); 
    scanf("%d", &n); //Taking Input from the User
        
    c=(n*n*n); //Equation for the Cube
    printf("Solution : %d \n", c); //Printing the solution.
}