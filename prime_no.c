#include<stdio.h>
int main()
{
    int num,flag=1;
 printf("Enter the number-\t");
scanf("%d",&num);

for(int i=2;i<num;i++){
 if(num%i==0){
   flag=0;
    break;
 }
}
if(flag==1){
    printf("%d is prime",num);
}
    else{
        printf("%d is non prime",num);
    }
return 0;
}