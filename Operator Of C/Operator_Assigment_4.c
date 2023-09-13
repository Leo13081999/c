/*4. Read temp in centigrade and if it more than 30 display message hot , if it is more than 40 very hot else
normal*/

#include<stdio.h>

int main()

{
    float centigrade;

    printf("Enter temp in centigrade :");
    scanf("%f",&centigrade);

    if (centigrade>30)
    {
        printf("%.2f temp is Hot",centigrade);
    }
    else if (centigrade>40)
    {
    
        printf("%.2f temp is Very Hot",centigrade);
    }
    else
    {
        printf("%.2f temp is Normal",centigrade);
    }
    
}
