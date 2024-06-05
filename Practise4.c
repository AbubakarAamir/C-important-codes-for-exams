//Write a c program to print the fabonacci series .
#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    // Loop to print Fibonacci series
    for (int i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2; // Calculate the next term
        t1 = t2;            // Update t1
        t2 = nextTerm;      // Update t2
    }
    printf("\n");
    return 0;}
 