//decrypting can be done is same way

#include <stdio.h>
int main()
{
    char str[20];

    printf("\nEnter the string : ");
    gets(str);

    for(int i=0; str[i]!='\0'; ++i)
    {
        str[i] = str[i]+1;   // str[i] = str[i]-1; for decryption
    }

    printf("\nEncyrpted string : ");
    puts(str);

    return 0;
}