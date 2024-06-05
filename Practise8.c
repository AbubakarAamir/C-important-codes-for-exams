//1. Sum of Elements in an Array.
//Problem: Write a program to find the sum of all elements in an array.

#include<stdio.h>
int main(){

int n, sum = 0;
printf("Enter the number of the array:\n");
scanf("%d",&n);

int array[n];
printf("Enter the elements of the array:\n");
for (int i = 0; i < n; i++)
{
    scanf("%d",&array[i]);
    sum += array[i];
}
printf("Sum of all the elements :%d \n ",sum);



    return 0;
}