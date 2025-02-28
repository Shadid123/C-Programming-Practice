#include <stdio.h>
    int main(){
    char name[100],dept[50];
    int id ,batch;
    float cgpa;

    printf("Enter your name:");
    scanf("%s",&name);
    //gets(name);

     printf("Enter your Department:");
    scanf("%s",&dept);

     printf("Enter your ID:");
    scanf("%d",&id);

     printf("Enter your Batch:");
    scanf("%d",&batch);

     printf("Enter your CGPA:");
    scanf("%f",&cgpa);

    printf("Name:%s,Department of:%s\n, Student ID:%d\m,Batch:%d\n and CGPA:%.2f",name,dept,id,batch,cgpa);


 return 0;
}

