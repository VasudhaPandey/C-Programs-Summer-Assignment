#include <stdio.h>

int main()
{
    float basic, hra, da, grossSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;
    grossSalary = basic + hra + da;

    printf("\n----- Salary Details -----\n");
    printf("Basic Salary : %.2f\n", basic);
    printf("HRA          : %.2f\n", hra);
    printf("DA           : %.2f\n", da);
    printf("Gross Salary : %.2f\n", grossSalary);

    return 0;
}