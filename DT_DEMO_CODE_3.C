/* A pro for Item Bill 
Input - Item Name , Unit Price , Quantity
Compute - Price -- Up * Qty 
				  Dis-- Price *.05;
				  NetPrice --Price -Dis
*/

#include<stdio.h>

int main()

{
    //variable Declaration 
    char inm[10];
    int up,qty,price;
    float dis,netp;

    //read the datajj

    printf("Enter item Name :");
    scanf("%s",&inm);
    printf("Enter Unit price :");
    scanf("%d",&up);
   printf("Enter Quantity :");
    scanf("%d",&qty);

    // Compute
    price=up*qty;
    dis=price*.05;
    netp=price-dis;

    //print bill
    printf("\n\n\n\n\t\t\t\tBILL\n");
    printf("Item Name :%s\n",inm);
    printf("Unit Price :%d\tQuantity :%d\tPrice :%d\n",up,qty,price);
    printf("Discount :%.2f\tNet price :%.2f\n",dis,netp);

}