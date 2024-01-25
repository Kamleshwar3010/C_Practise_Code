#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i;
    printf("Enter The Number to get Factorial : ");
    scanf("%d",&num);
    printf("Factorial of %d is ",num);
    for ( i = num-1; i>0; i--)
    {
      num=num*i;     
    }
    printf(" %d",num);
    
 return 0;
}