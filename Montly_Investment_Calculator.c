#include<stdio.h>
#include<conio.h>
int main()
{
    float principal,intrest,total;
    int i,t,month;
    printf("Enter Your principal amount: ");
    scanf("%f",&principal);
    printf("Enter Your rate of intrest: ");
    scanf("%f",&intrest);
    printf("Enter  investment time in month: ");
    scanf("%d",&month);
    for ( i = 0; i < month; i++)
    {
        principal+=(principal*intrest)/100;
        total+=principal;
        printf("You Get %f amount after %d month:\n ",total,i+1);
    }
    
 return 0;
}