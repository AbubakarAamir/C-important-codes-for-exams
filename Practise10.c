                                            //Created by :Abubakar Aamir
//Pointers practise :
#include<stdio.h>
int main(){

// & Referencing operator . (yeh address pick karta ha varaible ka )
//* Dereferencing operator .(yeh address ke varaible ki value uske andar se pick kr leta ha )
int x = 10;  //Here x is the integar varaible which stores the value  10
int *y = &x; //Here we created integar pointer varaible and give its value the address of a x 
printf("%d \n",x); //Here are the output is 10(because the value of x is 10)
printf("%u \n",&x); //Here are the output is 6422300(becuase its stores the address of x  )
printf("%u\n",y); //Here are the output is 6422300(because humne x ka address y pointer mein dal diya ha )
printf("%d\n",*y);//Here are the output is 10 (because * isne andar jakar value pick krli ha )
printf("%u",&y); //Here are the  output is 6422300




    return 0;
}