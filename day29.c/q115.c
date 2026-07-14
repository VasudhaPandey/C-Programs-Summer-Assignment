#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice, i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\n1. Find Length\n");
    printf("2. Reverse String\n");
    printf("3. Convert to Uppercase\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            while(str[length] != '\0')
                length++;
            printf("Length = %d\n", length);
            break;

        case 2:
            while(str[length] != '\0')
                length++;

            for(i = length - 1; i >= 0; i--)
                printf("%c", str[i]);
            break;

        case 3:
            for(i = 0; str[i] != '\0'; i++)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }
            printf("Uppercase String = %s\n", str);
            break;

        default:
            printf("Invalid Choice.\n");
    }

    return 0;
}