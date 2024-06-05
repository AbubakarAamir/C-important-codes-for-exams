//Program of :sum of arrray elements .
#include<stdio.h>
int main(){

int n,sum=0;
printf("Enter the number of the elements.\n ");
scanf("%d",&n);

int array[n];
printf("Enter the elements. \n");
for (int i = 0; i < n; i++)
{
    scanf("%d",&array[i]);
    sum+=array[i];
}
printf("The sum of all elements %d ",sum);



    return 0;
}