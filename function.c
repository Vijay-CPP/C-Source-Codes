#include <stdio.h>

float average(int a, int b, int c);

int main()
{
    float result;
    result = average(4, 6, 9);
    printf("Average : %f", result);
    return 0;
}

float average(int a, int b, int c)
{
    float avg = (a + b + c)/3.0;
    return avg;
}