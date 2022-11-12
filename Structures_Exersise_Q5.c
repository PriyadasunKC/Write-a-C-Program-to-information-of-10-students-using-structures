#include <stdio.h>

struct student
{

    char name[25];
    int marks;

} s[10];

void display();
int main()
{
    printf("Enter information of students:\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("For roll number %d\n", i + 1);
        printf("Enter Name\t: ");
        scanf(" %[^\n]s", &s[i].name);
        printf("Enter marks\t: ");
        scanf("%d", &s[i].marks);
    }

    display();
    return 0;
}

void display()
{
    printf("\nDisplaying information of students:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\ninformation for roll number %d\n", i + 1);
        printf("Name\t: %s\n", s[i].name);
        printf("Marks\t: %d\n", s[i].marks);
    }
}