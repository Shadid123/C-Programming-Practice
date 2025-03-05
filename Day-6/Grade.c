#include<stdio.h>
int main(){
    int n;
    printf("Enter your mark:");
    scanf("%d",&n);
    if(n>80){
        printf("A+");
    }
    else if(n>70){
        printf("A");
    }
    else if(n>60){
        printf("B");
    }
    else if(n>50){
        printf("C");
    }
    else if(n<33){
        printf("f");
    }
    else if(n<70){
        printf("A");
    }






return 0;
}
