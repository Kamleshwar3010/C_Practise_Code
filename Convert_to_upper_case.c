#include<stdio.h>
#include<string.h>

int main()
{
    char str[40]; 
    printf ("Enter a string to convert in upper case- ");  
    scanf ("%s", str);  
    printf("Upper Case of string is %s",strupr(str));

return 0;
}