#include <stdio.h>
int main()
{
    int table[10], n;

    printf("\nEnter the number to print table : ");
    scanf("%d", &n);

    for (int i = 0; i < 10; ++i)
    {
        table[i] = n * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\n %d x %d = %d", n, i+1, table[i]);
    }

    return 0;
}