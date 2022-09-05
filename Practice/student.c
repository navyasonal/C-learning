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
    int num;

    printf("Enter number of students: ");
    scanf("%d", &num);
    struct student stu[num];
    for (int i = 1; i <= num; i++)
    {
        printf("\nEnter the information of the student %d \n", i);
        printf("Roll No. ");
        scanf("%d", &stu[i].roll_no);
        printf("Name ");
        scanf("%s", stu[i].name);
        printf("Gender ");
        scanf("%s", &stu[i].gender);
        printf("Marks ");
        scanf("%f", &stu[i].marks);
    }
    for (int i = 1; i <= num; i++)
    {
        printf("\nThe information of the student %d: ", i);
        printf("\nRoll No. %d ", stu[i].roll_no);
        printf("\nName %s ", stu[i].name);
        printf("\nGender %s ", stu[i].gender);
        printf("\nMarks %.2f \n", stu[i].marks);

        
    }
    
}