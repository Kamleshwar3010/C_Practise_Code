#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char str[30];//taking string as input
    char revstr[30];//copying reverse string
    char orgstr[30];//storing orignal string in it
    printf("Enter the word to check wheather it is pelindrome of not-\t");
    gets(str);
   strcpy(orgstr,str);//copying value of entered string
   strcpy(revstr, strrev(str));//reversing entered string
    if (orgstr==revstr)
    {
        printf("%s is a Palindrome String\n", str);
    }
    else
    {
       printf("%s is not a Palindrome String\n", str);
    }
    
    //  printf("%s is a Palindrome String\n", orgstr);
    //  printf("\n%s mai ulta hu", revstr);
    return 0;
}
