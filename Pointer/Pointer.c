#include<stdio.h>
int main()
{

    int x=50;
    int *ptr;
    ptr=&x;
    //ptr=x;
    printf("Value of X =%d\n",x);
    printf("Address of X=%d\n",&x);
    printf("Value of pointer=%d\n",*ptr);//50
    printf("Address of pointer(not the address of x)=%d\n",&ptr);//adress of ppointer
    printf("Address of pointer=%d\n",ptr);//address of x

    return 0;

}
