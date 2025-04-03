#include<stdio.h>
int main(){
  int j,k,A[3][4]={ {2,4,5,6},
               {3,12,45,85},
               {45,65,25,32}};

 for(j=0;j<3;j++){
    for(k=0;k<4;k++){
        printf("%d\n ",A[j][k]);
    }
     //printf("\n");
 }



 return 0;

}
