#include<stdio.h>

int main ()
{
    struct Person
    {
        int age;
        float salary;
    };
    struct Person Person1,Person2;
     Person1.age=27;
     Person1.salary=15000.20;

     Person2.age=29;
     Person2.salary=20000.20;

     if (Person1.age==Person2.age && Person1.salary==Person2.salary){

        printf("Yes! Age and salary is the same");
     }

     else{
        printf("No not equal");
     }



    return 0;

}

