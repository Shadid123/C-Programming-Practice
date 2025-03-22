//Write a program  that reads the number from the and displays the maximum of it

#include<stdio.h>
int main()
{
    int n,i;
    printf("How many numbers=");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers =",n);


    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max =a[0];
    for(i=1; i<n; i++)
    {
        if (max <a[i])
            max =a[i];
    }
    printf("The maximum number is =%d", max);


    return 0;
}
