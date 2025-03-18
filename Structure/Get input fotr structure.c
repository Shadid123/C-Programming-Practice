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
    printf("Enter your informations for person 1=\n");
    printf("Enter age for person 1=");
    scanf("%d",&Person1.age);
    printf("Enter salary for person 1=");
    scanf("%f",&Person1.salary);

    printf("\n\nPerson1:\n");
    printf("Age=%d\n",Person1.age);
    printf("Salary=%.2f\n",Person1.salary);




    printf("\n\nEnter age for person 2=");
    scanf("%d",&Person2.age);
    printf("Enter salary for person 2=");
    scanf("%f",&Person2.salary);

    printf("\nPerson2:\n");
    printf("Age=%d\n",Person2.age);
    printf("Salary=%.2f\n",Person2.salary);









    return 0;

}


