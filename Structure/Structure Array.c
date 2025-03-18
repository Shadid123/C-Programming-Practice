#include <stdio.h>
#include<string.h>
int main()
{
    struct Person
    {
        char name [100];
        int age ;
        float salary;
    };

    struct Person Person[4];
    int i;


    for(i=0; i<4; i++)
    {
        printf("Enter the informations for person %d:\n",i+1);
        printf("Enter name =");
        fflush(stdin);
        fgets(Person[i].name, sizeof(Person[i].name), stdin);
        strtok(Person[i].name, "\n");
        printf("Age=");
        scanf("%d",&Person[i].age);
        printf("Enter the salary=");
        scanf("%f",&Person[i].salary);

    }



    for(i=0; i<4; i++)
    {
        printf("\n\nInformations of person %d:\n",i+1);
        printf("Name=%s\n",Person[i].name);
        printf(" Age =%d\n",Person[i].age);
        printf("Salary =%.2f\n",Person[i].salary);

    }



    return 0;
}
