#include <stdio.h>
int main()
{
    int arr[100], n, pos, value; // initializing array size(100), no. of user's elements(n), position to delete(pos), value to delete(value)
    // setting the number of elements in the array
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    // taking elements as user inputs
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element No.%d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Displaying the initial array
    printf("The elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // the value to insert
    printf("Enter the value to insert : ");
    scanf("%d", &value);
    // the position to insert
    printf("Enter the position to insert : ");
    scanf("%d", &pos);
    // validating position
    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position!!the position must be between 1 and %d!", n + 1);
    }
    // converting position to computer based index starting from 0
    pos--;
    // Looping from the last element towards pos
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1]; // shifting elements to the right to expand array.
        // 10 20 30 40 50 -> 60 at 3 -> 10 20 (60) 30 40 50
    }
    arr[pos] = value;
    n++;
    // display final output
    printf("The elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}