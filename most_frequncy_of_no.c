#include<stdio.h>
#include<limits.h>

int main()
{
int size,count=0,val=0;
int max= INT_MIN;
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++){
       if(arr[i]==arr[j]){
          count++;
       }
    }
   if(max<count){
     max=count;
   }
    count=0;
}
for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++)
    {
       if(arr[i]==arr[j]){
       count++;
       }
    }
    if(count==max){
        val=arr[i];
    }
    count=0;
}
printf("%d is repeated %d times",val,max);
return 0;
}
