#include<stdio.h>
int main()
{
    int A[3][4];
    int B[3][4];
    int row,col;

    //Get input for A matrix
    printf("Enter the value for A matrix\n");
    for(row=0; row<3; row++)//for row
    {
        for(col=0; col<4; col++)//for col
        {
            printf("A[%d][%d]=",row,col);
            scanf("%d",&A[row][col]);

        }
        printf("\n");
    }
    //Print A matrix
    printf("A=\t");
    for(row=0; row<3; row++)//for row
    {
        //printf("\t");
        for(col=0; col<4; col++)//for col
        {
            printf("%d ",A[row][col]);
        }
        printf("\n");
        printf("\t");
    }

    //Get input for B matrix
    printf("\n\nEnter the value for B matrix");
    for(row=0; row<3; row++)
    {
        printf("\n");
        for(col=0; col<4; col++)//for row
        {
            printf("B[%d][%d]=",row,col);//for col
            scanf("%d",&B[row][col]);
        }
        printf("\n");
    }
    //Print B matrix
    printf("B=");
    for(row=0; row<3; row++)//for row
    {
        printf("\t");
        for(col=0; col<4; col++)//for col
        {
            printf("%d ",B[row][col]);
        }
        printf("\n");
    }

    return 0;

}

