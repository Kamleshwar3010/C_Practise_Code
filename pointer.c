#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    int *q = p;
    int *r = *p;
    int *s = &p;

    // printf("%d\n", p);  // print address of a
    // printf("%d\n", &p); // print address of p
    // printf("%d\n", &a); // print address of a
    // printf("%d\n", q);  // print address of a
    // printf("%d\n", r);  // print value of a
    // printf("%d\n", s);  // print address of p
    // printf("%d", *p); // print value of a
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = &arr;
    // printf("%d\n", ptr);         // print address of arr[0]
    // printf("%d\n", ptr + 1);     // print address of arr[1]
    // printf("%d\n", arr);         // print address of arr[0] // this is equal to int* arr= &arr[0]
    // printf("%d", *arr + 1);      // print value of arr[1] // this is equal to int * arr= *arr[1]
    // printf("%d\n", arr[1]);      // print value of arr[1]
    // printf("%d\n", &arr[1]);     // print address of arr[1]
    // printf("%d\n", arr[0]);      // print value of arr[0]
    // printf("%d\n", arr + 1);     // print address of arr[1]
    // printf("%d", sizeof(int *)); // print size of int pointer data type
    // printf("%d", sizeof(arr)); // print size of array "arr" which is 20
    int *array = *array;
    // printf("%d\n", array);  // print garbage value since array have no value at its address
    // printf("%d\n", &array); // print address of array
    int *x = 9;
    int *y = &x;
    // printf("%d\n", &x); // print adsress of x
    // printf("%d\n", x);  // print value of x which is 9
    return 0;
}
