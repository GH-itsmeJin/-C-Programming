#include<stdio.h>

float Temp(float temp)
{
    if(temp>=22 && temp<=32)
    {
        printf("Temperature is Normal!");
    }
    else if(temp<22)
    {
        printf("Temperature is Cold!");
    }
    else if(temp>32)
    {
        printf("Temperature is Hot!");
    }

    return temp;
}

void main()
{
    float temp;
    
    printf("Checking Celsius Degree Temperature Status \n");
    printf("Enter a Temperature : \n");
    scanf("%f", &temp);
    
    Temp(temp);
}