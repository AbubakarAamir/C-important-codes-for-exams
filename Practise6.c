// Write a  program that Swapping using functions and pointers .

#include <stdio.h>

// Function to swap the values of two integers
void swap(int *a, int *b) {
    int temp; // Temporary variable to hold one of the values
    temp = *a; // Store the value pointed to by a in temp
    *a = *b;   // Assign the value pointed to by b to the location pointed to by a
    *b = temp; // Assign the value stored in temp to the location pointed to by b
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Print the numbers before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function and pass the addresses of num1 and num2
    swap(&num1, &num2);

    // Print the numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}




