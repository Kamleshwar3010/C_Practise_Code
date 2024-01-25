#include<stdio.h>

int main()
{
   int row;
printf("Enter The No. of Rows you want-\t");
scanf("%d",&row);

for(int i=1;i<=row;i++){
    for(int j=row;j>=i;j--){
        printf("*");
    }
    printf("\n");
}
return 0;
}