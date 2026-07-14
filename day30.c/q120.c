#include <stdio.h>

#define SIZE 5

int roll[SIZE], marks[SIZE];
char name[SIZE][30];

void addStudents()
{
    int i;

    printf("Enter details of %d students:\n", SIZE);

    for(i = 0; i < SIZE; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }
}

void displayStudents()
{
    int i;

    printf("\n----- Student Records -----\n");
    printf("Roll No\tName\tMarks\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }
}

void searchStudent()
{
    int i, r;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &r);

    for(i = 0; i < SIZE; i++)
    {
        if(roll[i] == r)
        {
            printf("\nStudent Found\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %d\n", marks[i]);
            return;
        }
    }

    printf("Student Record Not Found.\n");
}

int main()
{
    int choice;

    addStudents();

    do
    {
        printf("\n===== Student Management System =====\n");
        printf("1. Display All Students\n");
        printf("2. Search Student by Roll Number\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displayStudents();
                break;

            case 2:
                searchStudent();
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 3);

    return 0;
}