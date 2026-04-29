#include <stdio.h>
struct student
{
    int roll_no;
    char name[20];
    char course[20];
    int marks;
};
int main()
{
    int i;
    struct student s[4];
    for(i=0;i<1;i++)
    {
        printf("Enter roll_no:");
        scanf("%d",&s[i].roll_no);

        printf("Enter name:");
        scanf("%s",s[i].name);

        printf("Enter course:");
        scanf("%s",s[i].course);

        printf("Enter marks:");
        scanf("%d",&s[i].marks);
    }
    for(i=0;i<1;i++)
    {
        printf("Roll_no = %d\n Name = %c \nCourse = %c \nMarks = %d",s[i].roll_no,s[i].name,s[i].course,s[i].marks);
        printf("\n");
    }
    return 0;
}