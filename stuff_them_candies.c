//Adobe
#include<stdio.h>
#include<limits.h>
// Source-Hacker Earth
int main()
{
int size,extra;
int max=INT_MIN;
scanf("%d",&size);
int arr[size];
for (int i = 0; i < size; i++)
{
    scanf("%d",&arr[i]);
}
scanf("%d",&extra);
for (int i = 0; i <size; i++)
{
  if(arr[i]>max){
    max=arr[i];
  }
}
for (int i = 0; i <size; i++)
{
     if(arr[i]+extra>=max){
        arr[i]=1;
}
else{
    arr[i]=0;
}
}
for (int i = 0; i < size; i++)
{
    printf("%d ",arr[i]);
}
return 0;
}
