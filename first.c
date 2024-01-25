#include<stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
 nums[numsSize];
 for ( int i = 0; i < numsSize; i++)
 {
    if (target==nums[i]+nums[i+1])
    {
        returnSize[0]=i;
        returnSize[1]=i+1;    
    }  
 }
 
}
int main()
{ int n,arr[n],a[2];
scanf("%d",&n);
for (int i = 0; i <n; i++)
{
    scanf("%d",arr[i]);
}
int tar;
scanf("%d",&tar);
twoSum(arr,n,tar,a);

return 0;
}