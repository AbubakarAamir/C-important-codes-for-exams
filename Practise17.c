//Program that calculates the sum ,difference,addition.multiplication and division numbers given by the user

#include<stdio.h>
int main(){

//Declare a varaible for operations
float number1,number2;
float sum,difference,product,division,remainder;

printf("Enter the number 1:\n");
scanf("%f",&number1);

printf("Enter the number 2 :\n");
scanf("%f",&number2);

//Here are the operations of the user given numbers

sum = number1 + number2;
difference= number1 - number2;
product= number1 * number2;
remainder= number1 /number2;
division = number1 /number2;

//Here are the results  of the operaqtions 
printf("The sum of your given numbers is\n = %2.f ",sum);
printf("\nThe product of your given number is \n= %2.f ",product);
printf("\nThe division of your given number is\n = %2.f ",division);
printf("\nThe remainder  of your given number is\n = %2.f ",remainder);
printf("\nThe difference  of your given number is\n = %2.f ",difference);


    return 0;
}