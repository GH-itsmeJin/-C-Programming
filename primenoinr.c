#include<stdio.h>

int main()
{
    int n,sr,er,i,j,f;
    printf("Prime Number \n");
    printf("Enter a Starting Range: \n");
    scanf("%d", &sr);
    printf("Enter a End Range: \n");
    scanf("%d", &er);
    
    printf("Prime Numbers between %d to %d:\n", sr, er);
    for(i=sr;i<=er;i++)
    {
        f=0;
        for(j=1; j<=i;j++)
        {
            if(i%j==0)
            {
                f++;
            }
        }

        
        if(f==2)
        {
            printf("%d \n", i);
        }
    }
}