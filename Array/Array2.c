
//Write a program that reads 5 numbers from the user and displays the sum and avg of those  numbers
//Write a program that reads any  numbers from the user and displays the sum and avg of those  numbers

#include<stdio.h>
int main()
{
    int i,n,sum=0,avg=0;
    printf("How many numbers =");

    scanf("%d",&n);
    int a[n];
    printf("Enter %d integer numbers=",n);


    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum= sum + a[i];

    }
    printf("Sum is=%d\n",sum);
    printf("Average is=%.2f\n",(float)sum/n);

    return 0;
}
