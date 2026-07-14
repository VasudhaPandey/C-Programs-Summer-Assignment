#include <stdio.h>

struct Employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    struct Employee emp[5];
    int i;

    printf("Enter details of 5 employees:\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n----- Employee Records -----\n");
    printf("ID\tName\tSalary\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\t%s\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].salary);
    }

    return 0;
}