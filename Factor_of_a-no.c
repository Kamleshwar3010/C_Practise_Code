#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i;
    printf("Please Enter the Number to get factor :");
    scanf("%d",&num);
    for ( i=1; i <=num; i++)
    {
       if(num%i==0)
       {
         printf("Factor of %d is %d\n ",num,i);
       }
    }
    
 return 0;
}