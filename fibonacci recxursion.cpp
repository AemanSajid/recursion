#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void printFibonacciSeries(int terms) {
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 0;
    }

    printf("Fibonacci series: ");
    printFibonacciSeries(terms);

    return 0;
} 

