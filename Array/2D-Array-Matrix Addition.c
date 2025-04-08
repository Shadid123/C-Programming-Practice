
#include<stdio.h>
int main()
{
    int A[10][10];
    int B[10][10];
    int C [10][10];
    int number_Of_Rows,number_Of_Columns,row,col;

    //Get input for row & cols
    printf("Enter the numbers of rows & column:");
    scanf("%d %d",&number_Of_Rows,&number_Of_Columns);

    //Get input for A matrix
    printf("Enter the value for A matrix\n");
    for(row=0; row<number_Of_Rows; row++)//for row
    {
        for(col=0; col<number_Of_Columns; col++)//for col
        {
            printf("A[%d][%d]=",row,col);
            scanf("%d",&A[row][col]);

        }
        printf("\n");
    }



    //Get input for B matrix
    printf("\n\nEnter the value for B matrix");
    for(row=0; row<number_Of_Rows; row++)//for row
    {
        printf("\n");
        for(col=0; col<number_Of_Columns; col++)
        {
            printf("B[%d][%d]=",row,col);//for col
            scanf("%d",&B[row][col]);
        }
        printf("\n");
    }
    //Print A matrix
    printf("\nA=");
    for(row=0; row<number_Of_Rows; row++)//for row
    {
        printf("\t");
        for(col=0; col<number_Of_Columns; col++)//for col
        {
            printf("%d ",B[row][col]);
        }
        printf("\n");
    }
    //Print B matrix
    printf("\nB=");
    for(row=0; row<number_Of_Rows; row++)//for row
    {
        printf("\t");
        for(col=0; col<number_Of_Columns; col++)//for col
        {
            printf("%d ",B[row][col]);
        }
        printf("\n");
    }


    //Condition for Addition
    for(row=0; row<number_Of_Rows; row++)//for row
    {

        for(col=0; col<number_Of_Columns; col++)//for col
        {
            C[row][col]= A[row][col] + B[row][col];

        }

    }


    //Print addition of  matrix's

    printf("\nA+B=");
    for(row=0; row<number_Of_Rows; row++)//for row
    {
        printf("\t");
        for(col=0; col<number_Of_Columns; col++)//for col
        {
            printf("%d ",C[row][col]);
        }
        printf("\n");
    }

    return 0;

}


