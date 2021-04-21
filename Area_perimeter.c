#include <stdio.h>
int main()
{
    printf("\n");

    float length, breadth;

    printf("Enter the length : ");
    scanf("%f", &length);

    printf("Enter the Breadth : ");
    scanf("%f", &breadth);

    printf("\nArea : %f", length * breadth);
    printf("\nPerimeter : %f", 2 * (length + breadth));

    printf("\n\n");
    return 0;
}