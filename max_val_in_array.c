#include<stdio.h>
#include<limits.h>

int main()
{
//  printf("%d",INT_MIN);
int max=INT_MIN;
int n,i,index;
printf("How many elements youwantin your array-\t");
scanf("%d",&n);
int arr[n];
 printf("Enter value in array\n");
for ( i = 0; i <n; i++)
{
    scanf("%d",&arr[i]);
}
for ( i = 0; i < n; i++)
{
    if (arr[i]>max)
    {
        max=arr[i];
        index=i;
    }
}
printf("%d is at %d",max,index+1);

return 0;
}