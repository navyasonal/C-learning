#include <stdio.h>
#include <string.h>
void main()
{
    struct emp
    {
        int empid;
        char ename[10];
        int age;
        int salary;
    };
    struct emp e1;
    printf("\nEnter the information of the Employee \n");
    printf("Employee Id: ");
    scanf("%d", &e1.empid);
    printf("Name ");
    scanf("%s", e1.ename);
    printf("Age: ");
    scanf("%d", &e1.age);
    printf("Salary ");
    scanf("%d", &e1.salary);
    
    printf("\nThe information of the Employee: ");

    printf("\nEmployee Id: %d ", e1.empid);
    printf("\nName %s ", e1.ename);
    printf("\nAge %d ", e1.age);
    printf("\nSalary %d ", e1.salary);
}