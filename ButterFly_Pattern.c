#include <stdio.h>
//not completed
int main()
{
    int row;
    printf("Enter The No. of Rows you want-\t");
    scanf("%d", &row);
    for (int i = 1; i <=row; i++)
    {
        for (int j = 0; j <row*2; j++)
        {
            for (int k = 0; k <=j; k++)
            {
             if (k==j+1||row*2-j)
             {
                printf("*");
             }
             else{
                printf(" ");
             }
            //  printf("\n");
            }
             printf("\n");
            
        }
    }

    return 0;
}