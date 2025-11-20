#include <stdio.h> // standard I/O functions: printf, scanf

int main()
{
    int arr[100], result[100]; // arr: input numbers, result: numbers > threshold
    int n, threshold;          // n: number of elements, threshold: value to compare
    int ResIndex = 0;          // ResIndex: number of items stored in result

    // Input size
    printf("Enter number of elements: "); // prompt user for how many numbers
    scanf("%d", &n);                      // read the integer into n

    // Input array
    printf("Input elements: ");
    for (int i = 0; i < n; i++)
    {
        // prompt for each element and store it in arr
        printf("Enter the Element No.%d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the entered elements back to the user
    printf("The Elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // print each element separated by space
    }
    printf("\n"); // new line after printing the array

    // Input threshold
    printf("Threshold: ");   // ask user for the threshold value
    scanf("%d", &threshold); // read threshold

    // Find elements greater than the threshold and store them in result
    for (int i = 0; i < n; i++)
    {
        // compare current element with the threshold
        if (arr[i] > threshold)
        {
            result[ResIndex] = arr[i]; // save matching element
            ResIndex++;                // increment count of saved elements
        }
    }

    // Displaying results
    // Only print the number of matched elements (ResIndex), not all n
    printf("The Elements greater than %d are : ", threshold);
    for (int i = 0; i < ResIndex; i++)
    {
        printf("%d ", result[i]); // print each stored result
    }

    return 0; // indicate successful program termination
}