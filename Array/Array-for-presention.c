#include<stdio.h>
int main(){
 int a[5],i;
 printf("Enter 5 numbers:");
 for(i=0;i<5;i++){
    scanf("%d",&a[i]);
 }
 printf("Values are:\n");
 for(i=0;i<5;i++){
  printf("%d\n",a[i]);
}
return 0;
}
