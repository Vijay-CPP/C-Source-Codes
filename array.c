#include <stdio.h>
int main()
{
    int ar[5] = {1, 2, 3, 4, 5};
    int *ptr;

    ptr = &ar[0];

    printf("\nar[0] : %d", ar[0]);
    printf("\n*ptr : %u", *ptr);

    ptr++;

    printf("\nAfter ptr++ val of *ptr : %d", *ptr);

    return 0;
}