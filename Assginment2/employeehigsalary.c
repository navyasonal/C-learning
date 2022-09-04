#include <stdio.h>
#include <string.h>

struct employee
{
    int empid;
    char ename[10];
    int age;
    int salary;
};

struct employee e[2];


void maxsalary(struct employee *array)
{
    int maxSal=0,maxPos=0;
    for(int i=0;i<2;i++)
    {
        if(array[i].salary>maxSal)
        {
            maxSal=array[i].salary;
            maxPos=i;
        }
    }
        printf("\n\nDetails of employee with the highest salary\n");
        printf("\nEmp name: %s",array[maxPos].ename);
        printf("\nEmp ID: %d",array[maxPos].empid);
        printf("\nEmp age: %d",array[maxPos].age);
        printf("\nEmp salary: %d",array[maxPos].salary);
}


void main()
{
    printf("Enter the details of the employee: ");
    for (int i = 0; i < 2; i++)
    {
        printf("Employee Id: ");
        scanf("%d", &e[i].empid);
        printf("Name ");
        scanf("%s", e[i].ename);
        printf("Age: ");
        scanf("%d", &e[i].age);
        printf("Salary ");
        scanf("%d", &e[i].salary);
    }
    maxsalary(e);
}