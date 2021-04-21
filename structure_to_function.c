#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

void printDetails(struct employee e);

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

    printDetails(e1);  
    //only copy is passed not the address
    //same as call by value
    //to pass address we use &e1
    //and in function we have to create structure pointer as argum. 

    return 0;
}

void printDetails(struct employee e)  
{  
    //we can also take argument as a struc pointer and perform operation
    //using -> operator 
    printf("\nEmp Code : %d", e.code);
    printf("\nEmp Salary : %f", e.salary);
    printf("\nEmp Name : ");
    puts(e.name);
}