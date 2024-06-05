//swapping with pointer and function .
#include<stdio.h>

void swap(int *a ,int *b){
//Declare the two pointer integar
    //Declare the temporay integar for swapping method 
    int temp;
    //Swapping method 
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){

int num1,num2;
//Input two  numbers  form the user .
printf("Enter the first number :");
scanf("%d",&num1);

printf("Enter the second number :");
scanf("%d",&num2);

//Print the numbers before swapping .
printf("Before swappping : num1 = %d , num2 = %d \n",num1,num2);

swap(&num1,&num2);

//Print the result after the swapping 
printf("After swapping : num1 = %d ,num2 = %d \n",num1,num2);

    return 0;
}
