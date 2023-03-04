#include<stdio.h> //Header File

int main() //Main Function
{
    int l,w, p=0; //Variable Declaration
    printf("Perimmeter of a Triangle \n"); 
    printf("Enter a length : \n"); 
    scanf("%d", &l); //Taking Length Input from the user
    printf("Enter a Width : \n");
    scanf("%d", &w); //Taking Width Input from the user
    
    p=2*(l+w); //Equation to the Solution
    printf("Solution to the Perimeter of the Traingle : %d", p); //Printing the Solution
}