#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int upper, lower;

    srand(time(0));

    printf("\nEnter the lower limit : ");
    scanf("%d", &lower);

    printf("Enter the Upper limit : ");
    scanf("%d", &upper);

    int random_number = (rand() % (upper - lower + 1)) + lower;

    srand(time(0));
    printf("\nRandom Number from %d to %d is %d\n\n", upper, lower, random_number);

    return 0;
}