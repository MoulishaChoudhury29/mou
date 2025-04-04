#include <stdio.h>

// Recursive function to calculate sum of first n natural numbers
int sum(int n) {
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int result = sum(n);
        printf("Sum of first %d natural numbers is: %d\n", n, result);
}
return 0;
}

