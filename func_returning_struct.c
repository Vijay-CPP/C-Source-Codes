#include <stdio.h>

typedef struct employee
{
    int code;
    float salary;
    char name[20];
}emp;

emp input();
emp modify(emp *e);
void printdetail(emp e);

int main()
{
    emp e1;

    e1 = input();
    printdetail(e1);
    modify(&e1);
    printdetail(e1);

    return 0;
}

emp input()
{
    emp e;
    printf("\nEnter the Emp Code : ");
    scanf("%d", &e.code);
    printf("Enter the Emp Salary : ");
    scanf("%f", &e.salary);
    fflush(stdin);
    printf("Enter the Emp Name : ");
    gets(e.name);
    
    return e;
}

emp modify(emp *e)
{
    e->code = 100;
    e->salary = 99.99;
}

void printdetail(emp e)
{
    printf("\nEmp Code : %d", e.code);
    printf("\nEmp Salary : %f", e.salary);
    printf("\nEmp Name : ");
    puts(e.name);
}