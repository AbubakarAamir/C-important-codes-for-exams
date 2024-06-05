//2. Find the Largest and Smallest Elements in an Array
//Problem: Write a program to find the largest and smallest elements in an array.
#include<stdio.h>

void myfunction(){

int  n;

printf("Enter the number of elements in the arrays:\n ");
scanf("%d",&n);

int array[n];
printf("Enter the array elements :\n");
for (int i = 0; i < n; i++)
{
   scanf("%d",&array[i]);
}

int largest =array[0];
int smallest =array[0];
for (int i = 1; i < n; i++)
{
   if (array[i]>largest)
   {
   largest=array[i];
   }
   if (array[i]<smallest)
   {
    smallest=array[i];
   }
   
   
}
//Here are the results of a largest and samllest element of arrray.
printf("largest element is %d \n",largest); 
printf("Smallest element is %d \n",smallest);

}
int main(){
//Here we call the function .
myfunction();


    return 0;
}


















