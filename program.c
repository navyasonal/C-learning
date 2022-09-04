#include <stdio.h>
#include <stdlib.h>

struct employee{
    int empid;
    char ename[50];
    int age;
    float salary;
};

void displayemp(struct employee *e){
    int max=0;
    struct employee maxsalary;
    for(int i=0;i<5;i++){
        if((e+i)->salary>max)
        {
            max=(e+i)->salary;
            maxsalary = *(e+i);
        }
    }

    printf("Details of the high employee:\n\nID: %d\nName: %s\nAge: %d\nSalary: %f",maxsalary.empid,
    maxsalary.ename,maxsalary.age,maxsalary.salary);
}

int main() {

    struct employee *e;
    e = (struct employee *) malloc(5*sizeof(struct employee));
    printf("Enter the details of 5 employees\n");
    for(int i=0;i<5;i++){
        printf("Enter employee ID: ");
        scanf("%d",&(e+i)->empid);
        printf("\nEnter employee name: ");
        getchar();
        fgets((e+i)->ename,50,stdin);
        printf("\nEnter age: ");
        scanf("%d",&(e+i)->age);
        printf("\n Enter salary: ");
        scanf("%f",&(e+i)->salary);
    }

    displayemp(e);

    return 0;
}