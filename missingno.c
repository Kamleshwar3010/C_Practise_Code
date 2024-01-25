//MicroSoft,apple,Amazone,FB,Oracle
#include<stdio.h>
#include<limits.h>
//Source-Hacker Earth
int main()
{
int size,sum=0,total=0;
int max=INT_MIN;
int min=INT_MAX;
scanf("%d",&size);
int arr[size];
int arr1[size];
for (int i = 0; i < (size-1); i++)
{
    scanf("%d",&arr[i]);
}
for (int i = 0; i <(size-1); i++)
{
  if(arr[i]>max){
    max=arr[i];
  }
  if(arr[i]<min){
    min=arr[i];
  }
sum+=arr[i];
}
int k=0,j;
while (k<size)
{
    for(j=min;j<=max;j++){
        arr1[k]=j;
     k++;
    }
     j++;
     break;
}
   for (j = 0; j <  size; j++)
   {
total+=arr1[j];
}

printf("\n%d\t",total-sum);
return 0;
}
