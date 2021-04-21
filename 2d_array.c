#include <stdio.h>
int main()
{
    int ar[3][10], n[3];

    printf("\nEnter three numbers to print tables : ");
    scanf("%d%d%d", &n[0], &n[1], &n[2]);

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 10; j++)
        {
            ar[i][j] = n[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        printf("\n\n=========================\n");
        for (int j = 0; j < 10; j++)
        {
            printf("\n %d x %d = %d", n[i], j+1, ar[i][j]);
        }
    }    

    return 0;
}