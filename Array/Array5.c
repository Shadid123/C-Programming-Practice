#include<stdio.h>
int main()
{
    int a[7]= {10,20,32,36,45,18,2};
    int value,i,position;
    printf("Enter the value that you want to search:");
    scanf("%d",&value);

    for (i=0; i<7; i++)
    {

        if(value==a[i])
        {
            position=i+1;
            break;
        }
    }
    if(value!=a[i])
    {
        printf("oops!The number has not been found");
    }
    else
    {
        printf("The position of your number is at %d position",position);
    }

    return 0;

}
