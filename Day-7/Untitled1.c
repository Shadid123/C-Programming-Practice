#include<stdio.h>
int main()
{
    int a,n;
    printf("Enter the value 'a':");
    scanf("%d",&a);
    printf("Enter the value 'n':");
    scanf("%d",&n);

    if(a>n)
    {
        printf("'a' should not be greater the 'n'.Please enter valid values.\n");
    }
    else
    {
        printf("The odd numbers between %d and %d are:\n",a,n);
        for(int i=a;i<=n; i++)
        {
            if(i%2 !=0)
            {
                printf("%d\n",i);
            }
        }
    }



    getchar();
}

