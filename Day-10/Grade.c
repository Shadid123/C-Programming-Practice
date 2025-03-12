#include<stdio.h>
int main()
{
    int x;

    printf("Enter  the mark:");
    scanf("%d",&x);
    if(x>=80)
    {
        printf("A+");

    }
    else if(x>=70)
    {
        printf("A");
    }
    else if (x>=60)
    {

        printf("A-");
    }
    else if (x>=50)
    {

        printf("B");
    }
    else if (x>=40)
    {

        printf("C");
    }
    else if (x>=33)
    {

        printf("D");
    }

    else
    {
        printf("F");
    }
    return 0;
}
