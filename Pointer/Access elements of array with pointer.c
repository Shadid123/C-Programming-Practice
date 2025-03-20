#include<stdio.h>
int main (){
    int i,a[5]={10,20,30,40,50};
     int *ptr;
     ptr=&a[0];

     for (i=0;i<10;i++){
        printf("%d\n",*ptr);
        ptr++;
     }

return 0;

}
