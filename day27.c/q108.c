#include <stdio.h>

int main()
{
    char name[50];
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("\n------ Mark Sheet ------\n");
    printf("Name       : %s\n", name);
    printf("Roll No.   : %d\n", rollNo);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    if(percentage >= 90)
        printf("Grade : A+\n");
    else if(percentage >= 75)
        printf("Grade : A\n");
    else if(percentage >= 60)
        printf("Grade : B\n");
    else if(percentage >= 50)
        printf("Grade : C\n");
    else
        printf("Grade : Fail\n");

    return 0;
}