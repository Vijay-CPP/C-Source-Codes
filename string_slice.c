#include <stdio.h>
#include <string.h>

void slice(char str[], int start, int end, int length);

int main()
{
    char str[20];
    int start, end;

    printf("\nEnter the string : ");
    gets(str);

    printf("\nEnter the start : ");
    scanf("%d", &start);
    printf("\nEnter the end : ");
    scanf("%d", &end);

    int length = strlen(str);

    slice(str, start, end, length);

    return 0;
}

void slice(char str[], int start, int end, int length)
{
    for (int i = 0; i < end; ++i)
    {
        str[i] = str[start - 1 + i];
        if ((start - 1 + i) == (end - 1))
        {
            str[i + 1] = '\0';
            break;
        }
    }

    printf("\nString slice : ");
    puts(str);
}