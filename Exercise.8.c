#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int a, b; // the 2-element pattern we want to search

    // ---- Input section ----
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Take array input
    printf("Input array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input the two consecutive elements forming the pattern
    printf("Subarray (2 elements): ");
    scanf("%d %d", &a, &b);

    int found = 0; // flag to indicate whether pattern is found

    // ---- Pattern Search Logic ----
    // We check every pair of adjacent elements: (arr[i], arr[i+1])
    for (i = 0; i < n - 1; i++)
    {

        // If current pair matches the pattern (a, b)
        if (arr[i] == a && arr[i + 1] == b)
        {
            found = 1; // mark as found
            break;     // no need to check further
        }
    }

    // ---- Output ----
    if (found)
        printf("Found\n");
    else
        printf("Not Found\n");

    return 0;
}
