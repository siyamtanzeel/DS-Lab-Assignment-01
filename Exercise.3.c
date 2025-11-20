#include <stdio.h>

int main()
{
    int n, pos, arr[100]; // initializing array size(100), the size user wants(n), the position to delete(pos)
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    // looping through the array and taking user input as elements
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element No.%d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    // showing the input Array
    printf("The elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // taking the position of desired element to delete(human counts from 1, not 0)
    printf("Enter the Position to delete : ");
    scanf("%d", &pos);
    // validating position
    if (pos < 1 || pos > n)
    {
        printf("Invalid Position!");
        return 0;
    }

    // converting to computer style indexing that starts from 0
    pos--;

    // deleting that specific element by shifting other elements from right side to its position
    //  10 20 30 40 50 -> 10 30 40 50
    for (int i = pos; pos < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    // reducing array size to run the loop for displaying Array
    n--;

    printf("The elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}