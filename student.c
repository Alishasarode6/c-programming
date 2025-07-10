#include<stdio.h>
struct student
{
    int roll;
    char name[100];
    float marks;
};

int  main()
{
    struct student s;

    printf("enter student details :");
    printf("\nroll number :");
    scanf("%d", &s.roll);
    printf("name :");
    scanf("%s", &s.name);
    printf("marks :");
    scanf("%f", &s.marks);

    printf("\ngiven data is :\n");
    printf("\nroll number : %d",s.roll);
    printf("\nname        : %s",s.name);
    printf("\nmarks       : %.2f",s.marks);

    return 0;
}