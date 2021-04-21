#include <stdio.h>
int main()
{
    int j = 5;

    printf("\nj   = %d", j);
    printf("\n++j = %d", ++j);
    printf("\nj   = %d", j);
    printf("\nj++ = %d", j++);
    printf("\nj   = %d\n", j);
    
    int i = 3;
    
    printf("\nThe value of [ i, ++i, i++ ] is [ %d, %d, %d ] \n\n", i, ++i, i++);
    
    //printf reads arguments from right to left

    return 0;
}