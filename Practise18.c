//Here is the program to find the maximium of three given numbers 
#include<stdio.h>

void myfunction(){
int number1,number2,number3,maximium;
printf("Enter the number 1 :\n");
scanf("%d",&number1);

printf("Enter the number 2 :\n");
scanf("%d",&number2);
printf("Enter the number 3 :\n");
scanf("%d",&number3);
if (number1>=number2 && number1>=number3)
{
    maximium = number1;
}
else if (number2>=number1&& number2>=number3)
{
    maximium =  number2;
}
else{
    maximium = number3;
}

printf("Here are the maximium number is : %d\n",maximium);




}
int main(){


myfunction(); //Here we ythe above function 

    return 0;
}


