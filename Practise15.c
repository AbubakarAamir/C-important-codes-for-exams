//Here is the program to find even and odd.
#include<stdio.h>
int  main(){

int number;
printf("Enter a number to check its even or odd:\n");
scanf("%d",&number);

if (number %2==0)
{
    printf("Its even number bro:\n");

}

else{
    printf("Its a odd number bro :\n");
}

    return 0;
}