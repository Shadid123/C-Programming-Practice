#include<stdio.h>
int main()
{


    int A[10][10],Transpose[10][10],row,col,r1,c1;
    printf("Enter the number of rows and columns=");
    scanf("%d %d",&r1,&c1);

    printf("Enter the elements of matrix\n");

    //Take input for matrix
    for(row=0; row<r1; row++)
    {
        printf("\n");
        for(col=0; col<c1; col++)
        {

            printf("[%d][%d]=",row,col);
            scanf("%d",&A[row][col]);
        }
    }


    //Print matrix
    printf("\nBefore transpose=\n");
    for(row=0; row<r1; row++)
    {

        printf("\n");
        for(col=0; col<c1; col++)
        {
            printf("%d ",A[row][col]);

        }
    }
    //Transpose matrix
    for(row=0; row<r1; row++)
    {
        for(col=0; col<c1; col++)
        {
            Transpose[col][row] = A[row][col];
        }

    }

    //Print tranpose
    printf("\nAfter transpose=\n");
    for(row=0; row<c1; row++)
    {
        printf("\n");

        for(col=0; col<r1; col++)
        {
            printf("%d ",Transpose[row][col]);
        }

    }

    return 0;

}
