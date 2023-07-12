#include<stdio.h>

Int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 0;
    }

    int fact = factorial(n);
    printf("The factorial of %d is %llu.\n", n, fact);

    return 0;
} 

