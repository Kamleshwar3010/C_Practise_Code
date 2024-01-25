#include <stdio.h>

void call_by_value(int a)
{
    a = 100;
}

void call_by_ref(int *a)
{
    *a = 100; // Assigning the value 100 to the memory location pointed by a
}

int main()
{
    int p = 5;
    call_by_value(p);
    printf("%d\n", p); // Output: 5 (Unchanged)

    int q = 5;
    call_by_ref(&q);
    printf("%d\n", q); // Output: 100 (Modified)

    return 0;
}
