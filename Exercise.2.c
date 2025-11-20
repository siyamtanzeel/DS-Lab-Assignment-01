#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n); // Defining the size of the Array
    int arr[n];

    // Set the elements of Array by user input
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element : ", i + 1);
        scanf("%d", &arr[i]);
    }

    // display duplicate elements
    printf("The duplicate elements are : ");
    // looping through the array
    for (int i = 0; i < n; i++)
    {
        // comparing the array to itself by a nested loop
        for (int j = i + 1; j < n; j++)
        {
            // if two values are equal, stop the loop, we found the duplicate
            if (arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    return 0;
}