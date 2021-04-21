// program to read 3 integers from a file

#include <stdio.h>
int main()
{
    FILE *ptr;
    int a, b, c;
    
    ptr = fopen("Numbers.txt", "r");
    fscanf(ptr, "%d%d%d", &a, &b, &c);

    printf("a, b & c : %d, %d & %d", a, b, c);

    return 0;
}
