#include<stdio.h>

int main ()
{
    //Local structure
    struct Person
    {
        int age;
        float salary;
    };

    struct Person Person1,Person2;
    Person1.age=27;
    Person1.salary=15000.20;

    printf("Person1:\n");
    printf("Age=%d\n",Person1.age);
    printf("Salary=%.2f\n",Person1.salary);




    Person2.age=29;
    Person2.salary=20000.20;

    printf("Person2:\n");
    printf("Age=%d\n",Person2.age);
    printf("Salary=%.2f\n",Person2.salary);





    return 0;

}

