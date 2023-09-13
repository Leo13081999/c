/* 2. Read name , age ,height of a person , apply criteria for selection that is age should be in the range 18-
25 years and height should be >=5.4 */

#include<stdio.h>

int main()

{
    char nm[20];
    int age;
    float height;

    printf("Enter Name Of Person :");
    scanf("%s",&nm);
    printf("Enter Age Of Person :");
    scanf("%d",&age);
    printf("Enter Height Of Person :");
    scanf("%f",&height);

    if (age>18 && age<25 && height>=5.4)
    {
        printf("%s is Selected \n",nm);
    }
    else
    {
        printf("%s is not Selected \n",nm);
    }

}