#include <stdio.h>
int main()
{
    int ar[3][3][3];

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                printf(" %u", &ar[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}