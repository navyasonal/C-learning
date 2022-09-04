#include <stdio.h>
#include <string.h>
void main()
{
    struct student
    {
        int roll_no;
        char name[10];
        float marks;
        char gender[10];
    };
    struct student s1;
    printf("\nEnter the information of the student \n");
    printf("Roll No. ");
    scanf("%d", &s1.roll_no);
    printf("Name ");
    scanf("%s", s1.name);
    printf("Gender ");
    scanf("%s", &s1.gender);
    printf("Marks ");
    scanf("%f", &s1.marks);
    printf("\nThe information of the student: ");

    printf("\nRoll No. %d ", s1.roll_no);
    printf("\nName %s ", s1.name);
    printf("\nGender %s ", s1.gender);
    printf("\nMarks %.2f ", s1.marks);
}