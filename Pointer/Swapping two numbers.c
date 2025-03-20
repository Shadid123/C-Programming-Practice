#include<stdio.h>
int main ()
{
    int x=30,y=50,temp;

    printf("before swaping x=%d & y=%d\n",x,y);
    int *ptr,*ptr1;
    ptr=&x;
    ptr1=&y;

    temp=*ptr;
    *ptr=*ptr1;
    *ptr1=temp;

    printf(" After swapping x=%d & y=%d",x,y);

    return 0;

}
