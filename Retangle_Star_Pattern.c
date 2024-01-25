#include<stdio.h>

int main()
{
    int row,col;
printf("Enter The No. of Rows you want-\t");
scanf("%d",&row);
printf("Enter The No. of Columns you want-\t");
scanf("%d",&col);

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}