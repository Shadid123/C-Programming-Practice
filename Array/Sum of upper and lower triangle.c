#include<stdio.h>
int main()
{
    int A[12][12],row,col,r1,c1,sum=0;
    printf("Enter the number of rows and columns=");
    scanf("%d %d",&r1,&c1);


    //Get input for matrix
    printf("Enter the elements of matrix=\n");
    for(row=0; row<r1; row++)
    {
        printf("\n");
        for(col=0; col<c1; col++)
        {
            printf("[%d][%d]= ",col,row);
            scanf("%d",&A[row][col]);
        }
    }
    //print matrix
    printf("\nMatrix=");
    for(row=0; row<r1; row++)
    {
        printf("\n");
        for(col=0; col<c1; col++)
        {
            printf(" %d ",A[row][col]);
        }
    }


    //Condition for upper triangle sum
    printf("\n\nUpper triangle elements=");
    for(row=0; row<r1; row++)
    {
        for(col=0; col<c1; col++)
        {
            if(row<col)
            {
                printf("%d ",A[row][col]);
                sum=sum+A[row][col];
            }
        }

    }
    //Condition for lower triangle sum
    printf("\n\nLower triangle elements=");
    for(row=0; row<r1; row++)
    {
        for(col=0; col<c1; col++)
        {
            if(col<row)
            {
                printf("%d ",A[row][col]);
                sum=sum+A[row][col];
            }
        }

    }

    //Print sum
    printf("\n\nSum of upper triangle= %d",sum);
    printf("\n\nSum of lower triangle= %d\n",sum);


    return 0;
}

