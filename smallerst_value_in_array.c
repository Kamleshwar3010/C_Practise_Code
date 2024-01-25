#include <stdio.h>
#include <limits.h>

int main()
{
    int n, small = INT_MAX, index;
    printf("How many elements yo want in your array-\t");
    scanf("%d", &n);
    int arr[n];
    printf("Enter value in array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            index = i;
        }
    }
    printf("%d is at %d", small, index + 1);
    return 0;
}