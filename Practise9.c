#include<stdio.h>
int main(){

FILE *ptr = NULL;
char string[100]= "My name is abubakar aamir .This is the my first Io files and files handling in c language ";
ptr = fopen("file.txt","a");
fprintf(ptr,  "%s",string);

fclose;



    return 0;
}