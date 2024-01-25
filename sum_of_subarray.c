#include <stdio.h>

int main()
{
    int sum, n;
    printf("How many elements you want in your array-\t");
    scanf("%d", &n);
    int arr[n];
    printf("Enter value in array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // 1,1+2,1+2+3,2,2+3,3 //1,3,6,2,5,3
    // total subarray= n*(n+1)/2
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        printf("\nsub array from %dth index \n", i + 1);
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            printf("\nsum of %dth element's %dth sub array is %d \t", i + 1, j + 1, sum);
        }
    }

    return 0;
}