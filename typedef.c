// It is used to create custom data type name

#include <stdio.h>

typedef struct employee
{
    int code;
    float salary;
    char name[20];
}emp;  
//this emp has become my custom data type name 
//for employee structure
//now we an declare like emp e1, e2, e[50]; 

int main()
{
    emp e1;

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