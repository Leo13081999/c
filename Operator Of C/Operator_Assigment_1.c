/*1. Read price for dozen of oranges and quantity to purchase. Compute price for given quantity and
round it to nearest integer.*/

    #include<stdio.h>

    int main()
    {
        int quantity_purchase;
        float price_dozen_of_oranges,price;

        printf("Enter Price For Dozen Of Oranges :"); 
        scanf("%f",&price_dozen_of_oranges);
        printf("Enter Quantity To Purchase :");
        scanf("%d",&quantity_purchase);

        price=price_dozen_of_oranges*quantity_purchase;

        printf("Price :%.2f\n",price);


    }
