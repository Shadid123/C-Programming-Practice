//Area of a triangle


#include<stdio.h>
int main()
{

    double a,b,c,s,area;

    printf("Enter three values:");
    scanf("%lf %lf %lf",&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of triangle=%.2lf",area);
    return 0;




}




