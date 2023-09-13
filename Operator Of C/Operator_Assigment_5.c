/*Read person age to display following message as per age
< 18 --Jr. Kid
>=18 <25 College going
>=25 <40 Career oriented
>=40 <60 middle age
>=60 Old age*/

#include<stdio.h>

int main()
{
    int age;
    
    printf("Enter Person age :");
    scanf("%d",&age);

    if(age<18)
    {
        printf("%d age is Jr kid",age);
    }
    else if(age>=18 && age<25)
    {
        printf("%d age is College Going",age);
    }
        if(age>=25 && age<40)
    {
        printf("%d age is Career Oriented",age);
    }
    if(age>=40 && age<60)
    {
        printf("%d age is Middle Age",age);
    }
    if(age>=60)
    {
        printf("%d age is Old Age",age);
    }


}