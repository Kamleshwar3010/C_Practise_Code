#include<stdio.h>

int main()
{
    int row,k=0;
printf("Enter The No. of Rows you want-\t");
scanf("%d",&row);
for(int i=1;i<=row;i++){
    for(int j=1;j<=i;j++){
        k=k+1;
     printf("%d ",k);
    }
    printf("\n");
}
return 0;
}