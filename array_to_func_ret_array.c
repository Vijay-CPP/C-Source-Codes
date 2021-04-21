#include <stdio.h>

int * modify(int *ar);

int main()
{
    int ar[5], *ptr;

    printf("\nEnter 5 numbers : ");
    for(int i=0; i<5; ++i)
    {
        scanf("%d", &ar[i]);
    }
    
    ptr = modify(ar);

    printf("\nNumbers after modification : ");
    for(int i=0; i<5; ++i)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}

int * modify(int *ar)
{
    for(int i=0; i<5; ++i)
    {
        ar[i] = ar[i] + 1;
    }
    return ar;
}