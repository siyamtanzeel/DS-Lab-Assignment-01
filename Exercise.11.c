#include <stdio.h>

int main()
{
    int n;

    // ---- Input array size ----
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // ---- Input array elements ----
    printf("Input array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // ---- Initialize max and min ----
    int max = arr[0]; // assume first element is max
    int min = arr[0]; // assume first element is min

    // ---- Find actual max and min ----
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i]; // update max if larger
        if (arr[i] < min)
            min = arr[i]; // update min if smaller
    }

    // ---- Calculate largest difference ----
    int largestDiff = max - min;

    // ---- Output ----
    printf("Largest difference is %d\n", largestDiff);

    return 0;
}
