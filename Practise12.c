#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){

// Integar for roll number and obtained mark.(for calculations )
int rollnumber,obtained,percentage;
//character for taking name and father name from the user.
char name [100];
char fathername [100];

// Integar for taking subjects marks from the user .
int Pst,Ds,Ict,Calculus,English,Pf,class;


//Here we taking input from the user 
printf("Welcome to the school annual meeting :\n");
printf("********************************************\n");
printf("Enter your Name here for the result:\n");
scanf("%d",&name);

printf("Enter your Father name here :\n");
scanf("%d",&fathername);

printf("Enter your Roll number :\n");
scanf("%d",&rollnumber);

printf("Enter your semeter:\n");
scanf("%d",&class);

printf("Enter your all subjects number which are given below :\n");

printf("Enter your PST number :\n");
scanf("%d",&Pst);


printf("Enter your DS number :\n");
scanf("%d",&Ds);

printf("Enter your English number :\n");
scanf("%d",&English);

printf("Enter your PF number:\n");
scanf("%d",&Pf);

printf("Enter your ICT number:\n");
scanf("%d",&Ict);

printf("Enter your Calculus number:\n ");
scanf("%d",&Calculus);


//For total of all subjects.

obtained = Pst + Calculus + Ict + Ds + English + Pst;
percentage =  obtained * 100 /500;

printf("************** Your-Marksheet*****************");

printf("Your Name is : %s \n ",name);
printf("Your Semester is:%d \n ",class);
printf("Your Roll number is :%d\n",rollnumber);
printf("Your Percentage is :%d \n ",percentage);
printf("Your Obtained number is :\n ",obtained);

//Here we give the grades according to the percentage.
if (percentage>=80)
{
    printf("Your grade is A-1:\n");
}
else if (percentage>=70)
{
    printf("Your grade is A:\n");
}

else if (percentage>=60)
{
    printf("Your grade is B:\n");
}

else if (percentage>=50)
{
    printf("Your grade is C:\n");
}

else if (percentage>=40)
{
    printf("Your grade is D:\n ");
}

else if (percentage>=33)
{
    printf("Your grade is E:\n ");
}
else{
    printf("You are fail:\n");
}


//Here we give the remarks according to the percentage 
if (percentage>=80)
{
    printf("Congratulations you are a genius :\n");
}

else if (percentage>=70)
{
    printf("Exllecent. Good job:\n");
}

else if (percentage>=60)
{
    printf("Good try:\n");
}

else if (percentage>=50)
{
    printf("Please work hard:\n");
}
else if (percentage>=40)
{
    printf("Poor:\n");
}
else if (percentage>=33)
{
    printf("Very bad:\n");
}
else{
    printf("Brings your parents tomorrow:\n");
}

    return 0;
}