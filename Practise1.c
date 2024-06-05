//Write a c program which takes name from the user as input and also take the favorite dish from the user and tell them what kind of food he/she selected. 
#include<stdio.h>
#include<stdlib.h>
int main(){


char name[30]; // jo hamra user name enter kare ga toh uske liye humne 30 characters ki jagah fixed kr di ha 
char food[30]; // bikul ase he user jo food enter kare ga toh same uske liye humne 30 characters ki jadah fixed krdi ha 
int foodorder; // yeh humne  aik integar banaya ha (kiuke user koi number enter to kare ga na 1 se lekar 10 thak) 

printf("Please Write your name here sir:\n ");
scanf("%s",&name); // takes the name of the user 

printf("Please write your favorite dish : \n");
scanf("%s",&food); // takes the food choice from  the user 

printf("Please enter any number from 1 to 10 : so we check what type of dish you are selected :");
scanf("%d",&foodorder);

switch (foodorder)
{
case 1:
    printf(" sir you are selected Biryani: maangwa lo?");
    break;

case 2:
printf(" sir you are selected Palao: maangwa lo?");
break;

case 3:
printf(" sir you are selected Naharai:maangwa lo?");
break;

case 4:
printf(" sir you are selected glulab jumun:maangwa lo?");
break;
case 5:
printf(" sir you are selected Beef biryani:maangwa lo?");
break;

case 6:
printf("sir you are selected burger:maangwa lo?");
break;

case 7:
printf(" sir you are selected chicken broast:maangwa lo?");
break;

case 8:
printf("sir you are selected sandwich:maangwa lo?");
break;

case 9:
printf("sir you are selected Icecream:maangwa lo?");
break;

case 10:
printf(" sir you are selected kheer:maang lo?");
break;


default:
printf("The all items are finined now :) sorry sir ");
    break;
}


    return 0;
}





