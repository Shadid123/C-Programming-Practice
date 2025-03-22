#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],result[10][10],Number_of_rows,Number_of_columns,row,col,r1,r2,c1,c2;
    //Take input for matrix's
    printf("Enter the rows and columns for 1st matrix=");
    scanf("%d%d",&r1,&c1);

    printf("Enter the rows and columns for 2nd matrix=");
    scanf("%d%d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error! Column of first matrix is not equal to the row's of 2nd matrix\n");

        printf("\nEnter the rows and columns for 1st matrix=");
        scanf("%d%d",&r1,&c1);

        printf("Enter the rows and columns for 2nd matrix=");
        scanf("%d%d",&r2,&c2);
    }

    //Take input for 1st matrix
    printf("Enter the values of 1st matrix=\n");
    for(row=0; row<r1; row++)
    {
         printf("\n");
        for (col=0; col<c1;col++)
        {
            printf("A[%d][%d]=",row,col);
            scanf("%d",&A[row][col]);
        }
    }

    //Take input for 2nd matrix
    printf("\nEnter the values of  2nd matrix=\n");
    for(row=0; row<r2; row++)
    {
        printf("\n");
        for (col=0; col<c2; col++)
        {
            printf("B[%d][%d]=",row,col);
            scanf("%d",&B[row][col]);
        }
    }

    //print A matrix
     printf("\nA=\n");
    for(row=0; row<r1; row++)
    {
        printf("\n");
        for (col=0; col<c1; col++)
        {
            printf("\t%d ",A[row][col]);

        }
    }

     //Print B matrix
     printf("\nB=\n");
    for(row=0; row<r2; row++)
    {
        printf("\n");
        for (col=0; col<c2; col++)
        {
            printf("\t%d ",B[row][col]);

        }
    }
    return 0;

}
