#include<stdio.h>

int main (){
 int x,y,sum=0;
 int *ptr,*ptr1;
 scanf("%d %d",&x,&y);

 ptr=&x;
 ptr1=&y;
 sum=*ptr+*ptr1;
 printf("Sum=%d",sum);




return 0;
}
