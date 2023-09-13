// Read any 3 nos to find greatest and lowest among 

#include<stdio.h>

int main()

{
    int a,b,c;

    printf("Enter Any Three Number \n");
    scanf("%d%d%d",&a,&b,&c);
    
    // greatest
    
    if(a>b && a>c)
    printf("%d is greatest \n",a);
    else if(b>a && b>c)
    printf("%d is greatest \n",b);
    else
    printf("%d is greatest \n",c);

    //lowest

    if(a<b && a<c)
    printf("%d is lowest \n",a);
    else if(b<a && b<c)
    printf("%d is lowest \n",b);
    else
    printf("%d in lowest \n",c);
}