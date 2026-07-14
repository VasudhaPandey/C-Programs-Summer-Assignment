#include <stdio.h>

int main()
{
    int num, original, digit, i;
    int sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0)
    {
        digit = num % 10;
        fact = 1;

        for(i = 1; i <= digit; i++)
            fact = fact * i;

        sum = sum + fact;
        num = num / 10;
    }

    if(sum == original)
        printf("%d is a Strong Number.\n", original);
    else
        printf("%d is not a Strong Number.\n", original);

    return 0;
}