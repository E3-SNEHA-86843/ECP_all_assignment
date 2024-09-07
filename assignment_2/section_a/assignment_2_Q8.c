#include<stdio.h>
int main(){

        int quantity;
        float unit_price = 5.0;
        float total_price;

        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        if (quantity > 50) {
        	total_price = quantity * unit_price * 0.85; // 15% discount
        } else if (quantity > 30) {
        	total_price = quantity * unit_price * 0.90; // 10% discount
   	} else {
        	total_price = quantity * unit_price; // no discount
		printf("No discount applied\n");
    	}

    	printf("The total price is Rs %.2f\n", total_price);

    	return 0;

}
