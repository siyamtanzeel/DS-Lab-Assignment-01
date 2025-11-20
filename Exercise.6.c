#include <stdio.h> // printf and scanf

int main()
{
    int arr[100], result[100]; // arr: original input, result: stores unique elements
    int n, i, j, k = 0;        // n: number of elements, i/j: loop counters, k: result size
    int isDuplicate;           // flag to mark if current element is already in result

    // Input size
    printf("Enter number of elements: "); // ask how many numbers the user will enter
    scanf("%d", &n);                      // read value into n

    // Input array
    printf("Input array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // read each element into arr
    }

    // Remove duplicates: build result[] containing only first occurrence of each value
    for (i = 0; i < n; i++)
    {
        isDuplicate = 0; // assume arr[i] is not a duplicate

        // Check if arr[i] already exists in result[] (compare with previously stored uniques)
        for (j = 0; j < k; j++)
        {
            if (arr[i] == result[j])
            {
                isDuplicate = 1; // found a match, mark as duplicate
                break;           // no need to check further
            }
        }

        // If not duplicate, add current element to result[] and increase result count
        if (isDuplicate == 0)
        {
            result[k] = arr[i]; // store unique element
            k++;                // increment number of unique elements
        }
    }

    // Output modified array (only unique elements are printed)
    printf("Modified array: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", result[i]); // print each unique value
    }
    printf("\n"); // newline after printing array

    return 0; // program finished successfully
}
