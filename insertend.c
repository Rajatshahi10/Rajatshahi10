#include <stdio.h>

int main()
{
    int a[10], size, i, insert, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size); // size of the array
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]); // elements of the array
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &insert); // element to be inserted

    a[5] = insert; // inserting the element
    size++;        // increasing the size of the array
    printf("The array after insertion is: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]); // printing the array after insertion
    }

    return 0;
}
