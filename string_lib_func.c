//In this program we've used strcmp, strlen, strcat & strrev
//strlwr(str) - converts all letters of string to lowercase
//strupr(str) - converts all letters of string to uppercase
//strcy(target, source);
#include <stdio.h>                     
#include <string.h>                     
void change(char ar[], int length);

int main()
{
    char str1[50], str2[20];

    printf("\nEnter the string 1 : ");
    gets(str1);
    printf("\nEnter the string 2 : ");
    gets(str2);

    printf("\nlength of string 1 : %d", strlen(str1));
    printf("\nlength of string 2 : %d", strlen(str2));

    if (strcmp(str1, str2) == 0)
    {
        printf("\nBoth are same string");
    }
    else
    {
        printf("\nDifferent string");
    }

    printf("\nConcatination : %s", strcat(str1, str2));
    
    strrev(str2);
    printf("\nstr2 after reversing : ");
    puts(str2);

    return 0;
}

