#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[20];
    int marks;
};

void display(struct student v[], int n);
int main()
{
    struct student s[100];
    int i, num;
    printf("Enter the number of students : ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("Enter the name of the student %d : \n", i + 1);
        scanf("%s", s[i].name);
        printf("Enter the roll number of the student %d : \n", i + 1);
        scanf("%d", &s[i].roll);
        printf("Enter the total marks of the student %d : \n", i + 1);
        scanf("%d", &s[i].marks);
    }
    display(s, num);
    return 0;
}
void display(struct student v[], int n)
{
    int highest = 0, highpos = 0;
    int i;
    for (i = 0; i < n - 1; i++)
    {
        highest = v[i].marks;
        if (v[i + 1].marks > highest)
        {
            highest = v[i + 1].marks;
            highpos = i + 1;
        }
    }
    printf("The highest marks is : %d\n", v[highpos].marks);
    printf("The details of the student with highest marks is  :\n");
    printf("The name is %s\n", v[highpos].name);
    printf("The roll number is %d\n", v[highpos].roll);
}