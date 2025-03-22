#include<stdio.h>
int main()
{

    int Array1[20],Array2[20],n,i;
    printf("How many numbers :");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&Array1[i]);
    }
    printf("Array1: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",Array1[i]);
    }
    for(i=0; i<n; i++)
    {

        Array2[i]=Array1[i];
    }
    printf("\nArray2:");
    for(i=0; i<n; i++)
    {
        printf("%d ",Array2[i]);
    }
    return 0;

}
