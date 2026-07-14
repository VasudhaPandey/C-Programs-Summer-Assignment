#include <stdio.h>

int main()
{
    char str[200], longest[100];
    int i = 0, j = 0, max = 0, start = 0, length = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\n')
        {
            length++;
        }
        else
        {
            if(length > max)
            {
                max = length;
                start = i - length;
            }
            length = 0;
        }
        i++;
    }

    if(length > max)
    {
        max = length;
        start = i - length;
    }

    for(i = start; i < start + max; i++)
        longest[j++] = str[i];

    longest[j] = '\0';

    printf("Longest word = %s\n", longest);

    return 0;
}