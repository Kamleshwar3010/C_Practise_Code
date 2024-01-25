#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d", arr[-1]); // return garbage value

    return 0;
}
