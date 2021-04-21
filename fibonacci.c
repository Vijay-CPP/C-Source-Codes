#include <stdio.h>
int main()
{
    int terms; 

    printf("Enter the number of terms : ");
    scanf("%d", &terms);

    int first = 0, second = 1;

    for(int i=0; i<terms-4; ++i)
    {
        printf(" %d", first);
        printf(" %d", second);
        first = first + second;
        second = first + second;
    }

    return 0;
}