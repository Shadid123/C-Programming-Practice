#include<stdio.h>
//Global structure
struct Person
{
    int age;
    float salary;
};

int main ()
{

    struct Person Person1= {27,15000.20},Person2= {29,20000.20},Person3={36,30000.50};//directly initializatin;

    //Element wise initialization
    // Person1.age=27;
    // Person1.salary=15000.20;

    //Structure variable assignment
    //Person3 = Person2;

    printf("Person1:\n");
    printf("Age=%d\n",Person1.age);
    printf("Salary=%.2f\n",Person1.salary);



    //Element wise initialization
    //Person2.age=29;
    //Person2.salary=20000.20;

    printf("\nPerson2:\n");
    printf("Age=%d\n",Person2.age);
    printf("Salary=%.2f\n",Person2.salary);



    printf("\nPerson3:\n");
    printf("Age=%d\n",Person3.age);
    printf("Salary=%.2f\n",Person3.salary);





    return 0;

}

