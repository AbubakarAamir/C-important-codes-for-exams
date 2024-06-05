//Simple calculator program that operates multiplication , division , subtraction  and addition using switch case .
//Using siwtch cases:
// #include <stdio.h>

int main() {
    char operator;
    double first, second;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", first, second, first + second);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", first, second, first - second);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", first, second, first * second);
            break;
        case '/':
            printf("%.2lf / %.2lf = %.2lf\n", first, second, first / second);
            break;
        default:
            printf("Error! Operator is not correct\n");
            break;
    }

    return 0;
}



// same program Using functions
#include<stdio.h>

void myfunction(){

      char operator;
    double first, second;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", first, second, first + second);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", first, second, first - second);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", first, second, first * second);
            break;
        case '/':
            printf("%.2lf / %.2lf = %.2lf\n", first, second, first / second);
            break;
        default:
            printf("Error! Operator is not correct\n");
            break;
    }

}
int  main(){

myfunction();

    return 0;
}