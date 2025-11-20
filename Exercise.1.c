/* Write a program to find second maximum and second minimum number of an integer array. Show the sample input and output clearly

Sample input : 32 56 43 45 98

Sample Output :
2nd Minimum : 43
2nd Maximum : 56

*/

#include <stdio.h>
int main()
{
    int n;
    printf("Please enter the number of elements : ");
    scanf("%d", &n); // specifying the size of array by user
    int arr[n];
    // n=4 arr[0] arr[1] arr[2] arr[3]

    // taking array inputs
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element no %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    // setting initial max and min values for assumption
    int max1 = arr[0];
    int max2 = -1000000;
    int min1 = arr[0];
    int min2 = 1000000;

    // looping through all the elements
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        // find 2nd maximum
        if (curr > max1)
        {
            max2 = max1;
            max1 = curr;
        }
        else if (curr > max2 && curr != max1)
        {
            max2 = curr;
        }
        // find 2nd minimum
        if (curr < min1)
        {
            min2 = min1;
            min1 = curr;
        }
        else if (curr < min2 && curr != min1)
        {
            min2 = curr;
        }
    }
    // showing results
    printf("The 2nd Maximum value is : %d \n", max2);
    printf("The 2nd Minimum value is : %d \n", min2);

    return 0;
}