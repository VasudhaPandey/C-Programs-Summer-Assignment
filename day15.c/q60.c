#include <stdio.h>

int main()
{
    int arr[100], n, i, index = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    while(index < n)
    {
        arr[index] = 0;
        index++;
    }

    printf("Array after moving zeros to the end:\n");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}