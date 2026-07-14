#include <stdio.h>

int main()
{
    char str[200];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
        i++;
    }

    str[j] = '\0';

    printf("String after removing spaces:\n%s", str);

    return 0;
}