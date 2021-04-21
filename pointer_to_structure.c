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
    struct employee *ptr;

    ptr = &e1;

    printf("\nEnter the Emp Code : ");
    scanf("%d", &ptr->code);            // we also write (*ptr).code
    printf("Enter the Emp Salary : ");
    scanf("%f", &ptr->salary);          // we also write (*ptr).salary
    fflush(stdin);
    printf("Enter the Emp Name : ");
    gets(ptr->name);                    // we also write (*ptr).name

    printf("\nEmp Code : %d", ptr->code);
    printf("\nEmp Salary : %f", ptr->salary);
    printf("\nEmp Name : ");
    puts(ptr->name);

    return 0;
}