#include <stdio.h>
int main()
{
    int x, *y, **z;
    x = 10;
    y = &x;
    z = &y;

    printf("\n x = %d", x);
    printf("\n y = %u", y);
    printf("\n z = %u", z);
    printf("\n Address &x = %d", &x);
    printf("\n Address &y = %d", &y);
    printf("\n Address &z = %d", &z);
    printf("\n Value *y = %d", *y);
    printf("\n Value *z = %d", *z);
    printf("\n Value **z = %d", **z);
    printf("\n *(&x) = %d", *(&x));
    printf("\n *(&y) = %d", *(&y));
    printf("\n *(&z) = %d", *(&z));

    return 0;
}