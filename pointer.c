#include <stdio.h>
int main()
{
    int x, *y;
    x = 10;
    y = &x;

    printf("\n x = %d", x);
    printf("\n y = %u", y);
    printf("\n &x = %d", &x);
    printf("\n &y = %d", &y);
    printf("\n *y = %d", *y);
    printf("\n *(&x) = %d", *(&x));
    printf("\n *(&y) = %d", *(&y));

    return 0;
}