#include<stdio.h>
int main(){
  char name []="Shadid";
  char surname[]="Mazumd";

   int d= strcmp(name,surname);
   if(d==0){
    printf("Strings are equal");
   }
   else{
   printf("Strings are not equal");
   }

}
