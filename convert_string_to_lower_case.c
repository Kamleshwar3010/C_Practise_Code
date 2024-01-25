#include<stdio.h>
#include<string.h>

int main()
{
    char str[40]; 
    printf ("Enter a string to convert in Lower case- ");  
    scanf ("%s", str);  
    printf("Lower Case of string is %s",strlwr(str));

return 0;
}