/*2. Read inital reading, final reading of a electricity board consumer by reading name, meter no.
Compute total units consumed and bill at the rate 3.50/=Rs per unit*/

#include<stdio.h>

int main()

{
    int i_reading, f_reading, meter_number,units,total;
    char rnm[10];
    float rate=3.50;
    
    printf("Enter reading name\t");
    scanf("%s",&rnm);
    printf("Enter Meter Number\t");
    scanf("%d",&meter_number);
    printf("Enter inital reading\t");
    scanf("%d",&i_reading);
    printf("Enter final reading\t");
    scanf("%d",&f_reading);

    units=f_reading-i_reading;
    total=units*rate;

    printf("\t\t\t\tBILL\n");
    printf("units :%d\n",units);
    printf("total :%d\n",total);






    


}
