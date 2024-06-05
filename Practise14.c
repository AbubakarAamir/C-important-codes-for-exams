#include <stdio.h>  // This line includes the standard input-output library

int main() {  // The main function, where the execution of the program begins

    double number;  // Declares a variable 'number' of type double (to store floating-point numbers)
    printf("Enter a number: ");  // Prints the message asking the user to enter a number
    scanf("%lf", &number);  // Takes the user's input and stores it in the 'number' variable

    // Starts a while loop that will continue as long as 'number' is greater than or equal to 0.0
    while (number >= 0.0) {
        printf("You entered %.2lf\n", number);  // Prints the number entered by the user, formatted to 2 decimal places

        printf("Enter a number: ");  // Asks the user to enter another number
        scanf("%lf", &number);  // Takes the user's input and updates the 'number' variable
    }

    return 0;  // Returns 0, indicating that the program has ended successfully
}