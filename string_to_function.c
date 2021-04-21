#include <stdio.h>
#include <string.h>
void change(char ar[], int length); 

int main()
{
    char ar[20];
    int length;
    printf("\nEnter the string : ");
    gets(ar);

    length = strlen(ar);
    change(ar,length);

    printf("\nString after change : ");
    puts(ar);

    return 0;
}

void change(char ar[], int length) //void change(char *ar, int length) 
{                                  //this can also be written
    for(int i = 0; i<length; i++)
    {
        if(ar[i] == 'a')
        {
            ar[i] = 'A';
        }
    }
}