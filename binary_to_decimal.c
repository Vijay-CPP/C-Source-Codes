#include <stdio.h>
int power(int base, int index);

int main()
{
    int binary, decimal = 0;

    printf("\nEnter the binary code : ");
    scanf("%d", &binary);

    for (int i = 0; binary != 0; ++i)
    {
        decimal = decimal + ((binary % 10) * power(2, i));
        binary = binary / 10;
    }

    printf("Decimal : %d\n", decimal);
    return 0;
}

int power(int base, int index)
{
    int result = 1;

    for (int i = 0; i < index; ++i)
    {
        result = base * result;
    }

    return result;
}