/*Read total distance to be travel by biker with the maximum speed 65 km / Hr and average fuel
consumption 45 km/liter .
Compute total time and fuel required to cover the given distance.
*/

#include<stdio.h>

int main()

{
   int td, max=65, fc=45, hour,min;
    float tt,fr;
    printf("Enter Total Distance by Biker :\t");
    scanf("%d",&td);
    tt= (float) td/ (float) max;
    fr=(float)td/(float)fc;   //Litres used = 300 / 45
    hour=tt;
    min=tt * 10;
    min = min % 10;
    min=min*6;
    printf("Total Time :%d /Hr %d min\n",hour,min);
    printf("fule Required :%.2f liter/km\n",fr);
}