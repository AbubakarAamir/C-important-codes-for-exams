//Write a c program of  multiplication of a  matrix. 

#include<stdio.h>
int  main(){

int rows,columns;

printf(" Enter the rows for  multiplication of a matrix:\n ");
scanf("%d",&rows);

printf("Enter the columns for  multiplication of a matrix:\n ");
scanf("%d",&columns);

int matrix1[rows][columns],matrix2[rows][columns],sum[rows][columns];

printf("Enter the first matrix :");
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < columns; j++)
    {
        scanf("%d",&matrix1[i][j]);
    }


    printf("Enter the second matrix :");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }

//Addition starts from here :
       for ( int i  = 0; i <rows; i++)
       {
        for (int j = 0; j< columns; j++)
        {
            sum[i][j] = matrix1[i][j] * matrix2[i][j];

        }
        
       }

       printf("Here are the resultant matrix of a multiplication:");
       for (int i = 0; i < rows; i++)
       {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ",sum[i][j]);

        }
        printf("\n");
        
       }
       
       

        
    }
    
    
}

    return 0;


}