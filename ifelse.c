#include <stdio.h>
int main()
{
    int a, b, c, d;

    printf("\n\nEnter four number one by one : ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    if(a>b && a>c && a>d)
    {
        printf("\n%d is the greatest.", a);
    }
    else if(b>c && b>d)
    {
        printf("\n%d is the greatest.", b);
    }
    else if(c>d)
    {
        printf("\n%d is the greatest.", c);
    }
    else
    {
        printf("\n%d is the greatest.", d);
    }

    printf("\n\n");
    return 0;
}

