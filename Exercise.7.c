#include <stdio.h> // needed for printf and scanf

int main()
{
    int fib[100]; // array to hold Fibonacci numbers (up to 100)
    int n, i;     // n: how many Fibonacci numbers to generate, i: loop index

    // Read how many terms the user wants
    printf("Enter N: ");
    scanf("%d", &n);

    // Validate input: we need at least 1 term to proceed
    if (n < 1)
    {
        printf("Invalid N\n"); // inform user and exit
        return 0;
    }

    // Base cases: first two Fibonacci numbers
    fib[0] = 0; // F(0) = 0
    if (n > 1)
        fib[1] = 1; // F(1) = 1 (only set when user requested at least 2 terms)

    // Generate Fibonacci sequence starting from index 2
    // Each number is sum of the previous two numbers
    for (i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print the sequence stored in fib[]
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fib[i]); // print each term separated by space
    }
    printf("\n"); // newline at end

    return 0; // successful termination
}
