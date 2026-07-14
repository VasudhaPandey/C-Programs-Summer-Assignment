#include <stdio.h>

struct Book
{
    int id;
    char title[30];
    char author[30];
};

int main()
{
    struct Book b[3];
    int i;

    printf("Enter details of 3 books:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Title: ");
        scanf("%s", b[i].title);

        printf("Author: ");
        scanf("%s", b[i].author);
    }

    printf("\n----- Library Records -----\n");

    for(i = 0; i < 3; i++)
    {
        printf("ID: %d  Title: %s  Author: %s\n",
               b[i].id, b[i].title, b[i].author);
    }

    return 0;
}