#include <stdio.h>

int sum(int n);

int main()
{
    int terms;

    printf("\nEnter the number of terms : ");
    scanf("%d", &terms);

    printf("The Sum upto %d is %d \n\n", terms, sum(terms));

    return 0;
}

int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}