#include <stdio.h>

struct Item
{
    int itemId;
    char itemName[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item;

    printf("Enter Item ID: ");
    scanf("%d", &item.itemId);

    printf("Enter Item Name: ");
    scanf("%s", item.itemName);

    printf("Enter Quantity: ");
    scanf("%d", &item.quantity);

   