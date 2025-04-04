#include <stdio.h>

// Recursive function to calculate sum of squares
int sumOfSquares(int n) {
    if (n == 1)
        return 1;
    else
        return (n * n) + sumOfSquares(n - 1);
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        int result = sumOfSquares(n);
        printf("Sum of squares of first %d natural numbers is: %d\n", n, result);
    }

    return 0;
}