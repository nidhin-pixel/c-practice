//Structure

#include <stdio.h>
struct student{
    int roll_no;
    char name[20];
    char course[20];
};

int main() 
{
    struct student s1;
    printf("Enter roll_no=");
    scanf("%d",s1.roll_no);

    printf("Enter name=");
    scanf("%s",s1.name);

    printf("Enter course=");
    scanf("%s",s1.course);

    printf("Name is %s\n roll_no is %d\n Course is %s",s1.name,s1.roll_no,s1.course);
    return 0;
}
