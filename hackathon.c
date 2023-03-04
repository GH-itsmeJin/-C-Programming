#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct bdata
{
    char fna[20];
    char sna[10];
    int age;
    struct cont
    {
      long ph;
      char email[30];
    }c; 
    struct dob 
    {
     int date;
     int mon;
     int yr;
    }db;
    struct pay
    {
     float bamt;
     float expe;
     float sav;
     }p;
};

void track(struct bdata [],int);
int main()
{   int i,ch,n;
    struct bdata a[100];
    printf("Enter the number of user whose data is to be stored:\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
     printf("Enter the First name:\n");
     scanf("%s",a[i].fna);
     printf("Enter the Last name:\n");
     scanf("%s",a[i].sna);
     printf("Enter the users age:\n");
     scanf("%d",&a[i].age);
     printf("Enter your contact details phone number:\n");
     scanf("%ld",&a[i].c.ph);
     printf("Enter your valid email id:\n");
     scanf("%s",a[i].c.email);
     printf("Enter your date of birth:\n");
     scanf("%d%d%d",&a[i].db.date,&a[i].db.mon,&a[i].db.yr);
     printf("Enter your basic first pay:\n");
     scanf("%f",&a[i].p.bamt);
    
    }
    printf("Data of the user is saved\n");
    
        
   printf("Do you wish to track your data:\n");
   scanf("%d",&ch);
   
   if(ch==1)
   track(a,n);
   
    return 0;
}

void track(struct bdata a[],int n)
{  int i=0,d;
   float eat,drink,shop,trans;
    printf("Enter the expenditures:\n");
    for(i=0;i<n;i++)
    {
    printf("Money spend on eatables:\t");
    scanf("%f",&eat);
    printf("\nMoney spend on drinks:\t");
    scanf("%f",&drink);
    printf("\nMoney spend on shopping:\t");
    scanf("%f",&shop);
    printf("Moeny spend on transportation:\t");
    scanf("%f",&trans);
    a[i].p.expe=(eat+drink+shop+trans);
    a[i].p.sav=a[i].p.bamt-a[i].p.expe;
    }
    for(i=0;i<n;i++)
    {
        printf("The users data:\n");
        printf("Name: %s\t%s\n",a[i].fna,a[i].sna);
        printf("Age:%d\n",a[i].age);
        printf("Contact details:\n");
        printf("Phone number=%ld\t email id-%s\n",a[i].c.ph,a[i].c.email);
        printf("Basic input amount of month: %f\n",a[i].p.bamt);
        printf("Total expenditure: %f\n",a[i].p.expe);
        printf("Savings at the end of the day: %f\n",a[i].p.sav);
    }
}