#include <stdio.h>

int main()
{
    int quantity;
    float price, total;

    printf("Enter price of one item: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    if(total >= 5000)
        total = total - (total * 0.10);

    printf("Total Bill = %.2f\n", total);

    return 0;
}