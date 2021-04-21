#include <stdio.h>
#include<string.h>
int main()
{
    printf("\nReturn value of strcmp : ");
    printf("\nJake , Fred : %d", strcmp("Jake", "Fred"));
    printf("\nFred , Jake : %d", strcmp("Fred", "Jake"));
    printf("\nHello , Hello : %d", strcmp("Hello", "Hello"));

    return 0;
}