#include <stdio.h>
#include <string.h>

struct student
{
    int rollno;
    char name[10];
    int age;
    float cgpa;
};
int main()
{
    struct student st[5];
    printf("Enter Records of 5 students");
    for (int i = 0; i <5; i++)
    {
        printf("\nEnter Details for student %d ",i+1);
        printf("\nRollno: ");
        scanf("%d", &st[i].rollno);
        printf("Name: ");
        scanf("%s", &st[i].name);
        printf("Age: ");
        scanf("%d", &st[i].age);
        printf("CGPA: ");
        scanf("%f", &st[i].cgpa);

    }
    printf("\nStudent Information List:");
    for (int i = 0; i <5; i++)
    {
        printf("\n\nDetails for student %d ",i);
        printf("\nRollno: %d", st[i].rollno);
        printf("\nName: %s", st[i].name);
        printf("\nAge: %d", st[i].age);
        printf("\nCGPA: %.2f", st[i].cgpa);
    }
    return 0;
}