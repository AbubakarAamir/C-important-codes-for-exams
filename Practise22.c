//Swapping program practise.
#include<stdio.h>
int main(){

//declare the variable .

int number1,number2,temp;

//Taking two numbers form the user
printf("Enter the number 1 :\n");
scanf("%d",&number1);

printf("Enter the number 2 :\n");
scanf("%d",&number2);

//The values before swapping 

printf("The values before swapping: number 1 = %d | number 2 = %d \n",number1,number2);

//Swapping method starts frtom here

temp = number1;
number1 =  number2;
number2 = temp;

//The values after the swapping 
printf("The values after the swapping: number1 = %d | number 2 = %d\n",number1,number2);


    return 0;
}