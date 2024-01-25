#include<stdio.h>


int main()
{
    int row,col;
printf("Enter The No. of Rows you want-\t");
scanf("%d",&row);
printf("Enter The No. of Columns you want-\t");
scanf("%d",&col);
 for(int i=1;i<=row;i++){
    for(int j=1;j<=col;j++){
        if(i==1||i==row){
            printf("*");
        }
        else if((j==1||j==col)){
             printf("*");
    }
        else{
        printf(" ");
        }
        }
         printf("\n");
}
    return 0;
}
