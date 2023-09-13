/* 1. Read a radius of a circle to find diameter, area, circumference.*/

#include<stdio.h>

int main()

{
    int r,d;
     float area,c,pie=3.14;
    printf("Enter radius of a circle ");
    scanf("%d",&r);

    d=2*r;
    c=2*pie*r;
    area=pie*r*r;
    printf("diameter of circle :%d\n",d);
    printf("Area of circle :%.2f\n",area);
    printf("circumference of circle :%.2f\n",c);    

}