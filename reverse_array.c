// Program to reverse an array, 
//here I've taken size as 10 you can take any number 

#include <stdio.h>
void reverse(int *ar, int size)
{
    // reverse algorithm
    int temp;
    for (int i = 0; i < (size/2); i++)
    {
        temp = ar[i];
        ar[i] = ar[size-(i+1)];
        ar[size-(i+1)] = temp;
    }
}
int main()
{
    int ar[10], i;
    int size = 10;

    printf("\nEnter the elements of the array : \n");
    for (i = 0; i < size; ++i)
    {
        scanf("%d", &ar[i]);
    }

    printf("\nArray before reversing : \n");
    for (i = 0; i < size; ++i)
    {
        printf(" %d", ar[i]);
    }

    reverse(ar, size);

    printf("\nArray after reversing : \n");
    for (i = 0; i < size; ++i)
    {
        printf(" %d", ar[i]);
    }

    return 0;
}