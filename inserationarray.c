// C Program to Insert an element at a specific position in an Array

#include <stdio.h>

int push();

int push(int i, int n, int arr, int pos, int x)
{
	printf("Original Array:\n");
    for(i=0;i<n;i++) // print the original array
    {
        
		printf("%d \t", arr[i]);
    }

	printf("\n");

	printf("Enter a Position:\n"); //Position to be inserted
	scanf("%d", &pos);
		
	for (i=n-1;i>=pos;i--) // shift elements forward
	{
        arr[i+1] = arr[i];
    }

	printf("Number to be Insert:\n"); //No. to be insert
	scanf("%d", &x);

	arr[pos] = x; // insert x at pos

	printf("Updated Array:\n");
	for (i=0;i<n+1;i++) // print the updated array
	{	
        printf("%d \t", arr[i]);
    }
	return 0;
}

void main()
{
	int i, x, pos, n;
	int arr[20];
    printf("Inseration in An Array\n");
	
	printf("Enter a no. of elements in an array:\n");
	scanf("%d", &n);

	printf("Enter a values of an Array:\n");

	for(i=0;i<n;i++) //Taking Values of an array
	{
		scanf("%d", &arr[i]);
	}

	push(int i, int n, int arr, int pos, int x);
	pop();
	show();

}