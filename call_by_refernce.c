#include <stdio.h>
void callbyref(int *ptr);

int main()
{
    int var;
    var = 10; 

    printf("\nValue before function call : %d", var);
    callbyref(&var);
    printf("\nValue after function call : %d", var);

    return 0;
}

void callbyref(int *ptr)
{
    *ptr = 15;
}