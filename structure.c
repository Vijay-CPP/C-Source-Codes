#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};


int main()
{
    struct employee e1;
    // initialization can also be done like
    // struct employee e1 = {12, 212.2, "Vijay"};
    // struct employee e1 = {0}; sets all elememts to zero

    printf("\nEnter the Emp Code : ");
    scanf("%d", &e1.code);
    printf("Enter the Emp Salary : ");
    scanf("%f", &e1.salary);
    fflush(stdin);
    printf("Enter the Emp Name : ");
    gets(e1.name);

    printf("\nEmp Code : %d", e1.code);
    printf("\nEmp Salary : %f", e1.salary);
    printf("\nEmp Name : ");
    puts(e1.name);

    return 0;
}