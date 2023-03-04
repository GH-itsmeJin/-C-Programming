#include<stdio.h>

void revarr(int *arr, int n);
void parr(int *arr, int n);

void parr(int *arr, int n)
{
    int i;
    printf("\nUpdated Array: \n");

    for (i=0; i<n; i++)
    {
        printf("%d \t", arr[i]);
    }
}

void revarr(int *arr, int n)
{
    int i;
    printf("Reverse of an array");
    for (i = 0; i<n/2; i++)
    {
        int Fval = arr[i];
        int Lval = arr[n - i - 1];
        arr[i] = Lval;
        arr[n - i - 1] = Fval;
    }
    parr(arr, n);
}

int main()
{
    int n, i, *ptr;
    
    printf("Enter a size of an array: \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter an elements of an array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");

    printf("Original Array : \n");
    for (i=0; i<n; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
    
    revarr(arr, n);  
}