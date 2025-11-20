#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;

    // ---- Input section ----
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Taking array input
    printf("Input array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // ---- Modification logic ----
    // Even index → add 2
    // Odd index  → add 3
    for (i = 0; i < n; i++)
    {

        if (i % 2 == 0)
        {                // index is even (0, 1, 2, ...)
            arr[i] += 2; // add 2 to even-index element
        }
        else
        {                // index is odd
            arr[i] += 3; // add 3 to odd-index element
        }
    }

    // ---- Output modified array ----
    printf("Elements of array are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
