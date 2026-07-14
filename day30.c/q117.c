#include <stdio.h>

int main()
{
    int roll[5], marks[5], i;
    char name[5][30];

    printf("Enter details of 5 students:\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\n----- Student Records -----\n");

    printf("Roll\tName\tMarks\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }

    return 0;
}