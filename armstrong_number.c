#include <stdio.h>
int main()
{
    int num, result = 0, digit;

    printf("Enter the number to check for Armstrong Number : ");
    scanf("%d", &num);

    int original = num;

    for (int i = 0; num != 0; ++i)
    {
        digit = num % 10;
        num = num / 10;

        result = result + (digit * digit * digit);
    }

    if (original == result)
    {
        printf("\n%d is an Armstrong Number", original);
    }
    else
    {
        printf("\n%d is not an Armstrong number", original);
    }
    return 0;
}