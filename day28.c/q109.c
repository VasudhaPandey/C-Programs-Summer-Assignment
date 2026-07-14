#include <stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
};

int main()
{
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.bookId);

    printf("Enter Book Title: ");
    scanf("%s", b.title);

    printf("Enter Author Name: ");
    scanf("%s", b.author);

    printf("\n----- Library Record -----\n");
    printf("Book ID     : %d\n", b.bookId);
    printf("Book Title  : %s\n", b.title);
    printf("Author Name : %s\n", b.author);

    return 0;
}