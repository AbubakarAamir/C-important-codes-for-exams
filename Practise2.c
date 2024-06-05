//Write a c program that given factorial of a given number .
#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1; // Use unsigned long long to handle large numbers

    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to calculate factorial
    for (int i = 1; i <= num; ++i) {
        factorial *= i; // Multiply factorial by current number
    }

    printf("Factorial of %d = %llu\n", num, factorial);
    return 0;
}

