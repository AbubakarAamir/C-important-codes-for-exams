//Sorting in arrays using ascending order 

//Made by :Abubakar Aamir.
//C Program to Sort Array Elements in Ascending :
#include<stdio.h>
int main(){

int a[10];// Declare an array 'a' of size 10 to store integars numbers 
int i,j,temp;//Declare integer variables i, j, and temp
printf("Enter array elements:)\n"); //Prompt the user to enter array elements
for ( i = 0; i < 10; i++) //Start a loop to input 10 integers into the array
{
    scanf("%d",&a[i]); //Read an integer from the user and store it in the array
}
//Bubble sort algorithm to sort the array in ascending order
for (i = 0; i < 10; i++)
{
    for (j = i+1; j<10; j++ )
    {
        if (a[i]>a[j])//If the current element is greater than the next element
        {
            temp = a[i]; // Swap the current element with the next element
            a [i] = a[j];
            a[j] = temp;

        }
        
    }
    
}
printf(" Array elements:)\n");
for ( i = 0; i < 10; i++) //Start a loop to print the sorted array elements
{
    printf("%d",a[i]); //Print each array element followed by a space
}
printf("\n***********All numbers are sorted in ascending order***********\n");



    return 0;
}