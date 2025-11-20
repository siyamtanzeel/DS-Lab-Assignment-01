#include <stdio.h>

int main()
{
    int n;

    // ---- Input array size ----
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // create array of size n

    // ---- Input array elements ----
    printf("Input array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int candidate = -1; // element that might be majority
    int count = 0;      // counter for Boyer-Moore algorithm

    // -------- Step 1: Find candidate using Boyer-Moore --------
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = arr[i]; // new candidate
            count = 1;
        }
        else if (arr[i] == candidate)
        {
            count++; // increment count if same
        }
        else
        {
            count--; // decrement count if different
        }
    }

    // -------- Step 2: Verify candidate --------
    count = 0; // reset count
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
            count++;
    }

    // -------- Step 3: Print result --------
    if (count > n / 2)
    {
        printf("Majority Element: %d\n", candidate);
    }
    else
    {
        printf("No Majority Element Found\n");
    }

    return 0;
}
