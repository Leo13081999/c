/*Read a temperature in centigrade to convert it into farhenite.*/

#include<stdio.h>

int main()

{
    int t,fr;
    printf("Enter temperature in centigrade :");
    scanf("%d",&t);

    fr=(1.8*t)+32;

    printf("farhenite :%d\t",fr);        

}
