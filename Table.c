#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i;
    printf("Please Enter the Number to get table: ");
    scanf("%d",&num);
    printf("Table of %d \n",num);
    for ( i = 1; i <= 10; i++)
    {
        printf("%d\n",num*i);
    }
    
 return 0;
}