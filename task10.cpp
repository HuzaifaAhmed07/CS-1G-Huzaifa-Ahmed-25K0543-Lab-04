#include <stdio.h>

int main() {
    int size, qty, crust, hour, deliveryOpt;
    char cheese, student;
    float basePrice = 0, pizzaCost = 0, crustCost = 0, cheeseCost = 0;
    float total = 0;

    
    printf("Choose pizza size (1.Small $8, 2.Medium $10, 3.Large $12): ");
    scanf("%d", &size);

    if (size == 1) {
        basePrice = 8;
    } else if (size == 2) {
        basePrice = 10;
    } else if (size == 3) {
        basePrice = 12;
    } else {
        printf("Invalid size.\n");
        return 0;
    }

  
    printf("How many pizzas (1, 2, or 3)? ");
    scanf("%d", &qty);

    if (qty == 1) {
        pizzaCost = basePrice;
    } else if (qty == 2) {
        if (size == 1) {
            pizzaCost = 15;   
        } else if (size == 2) {
            pizzaCost = 19;   
        } else if (size == 3) {
            pizzaCost = 23;  
        }
    } else if (qty == 3) {
        if (size == 1) {
            pizzaCost = 21;   
        } else if (size == 2) {
            pizzaCost = 27;  
        } else if (size == 3) {
            pizzaCost = 33;   
        }
    } else {
        printf("Invalid quantity.\n");
        return 0;
    }

 
    printf("Choose crust (1.Regular $0, 2.Thin $1, 3.Stuffed $2): ");
    scanf("%d", &crust);

    if (crust == 1) {
        crustCost = 0 * qty;
    } else if (crust == 2) {
        crustCost = 1 * qty;
    } else if (crust == 3) {
        crustCost = 2 * qty;
    } else {
        crustCost = 0;
    }


    printf("Extra cheese? (Y/N): ");
    scanf(" %c", &cheese);

    if (cheese == 'Y' || cheese == 'y') {
        cheeseCost = 1.5;
    }

 
    total = pizzaCost + crustCost + cheeseCost;

   
    printf("Enter current hour (0-23): ");
    scanf("%d", &hour);

    if (hour >= 11 && hour <= 14) {
        total = total * 0.90;  
    }

 
    printf("Do you have a student ID? (Y/N): ");
    scanf(" %c", &student);

    if (student == 'Y' || student == 'y') {
        total = total - 2;
        if (total < 0) {
            total = 0;  
        }
    }

  
    printf("Pickup or Delivery? (1.Pickup, 2.Delivery): ");
    scanf("%d", &deliveryOpt);

    if (deliveryOpt == 2) {
        total = total + 3;
    }

   
    if (qty == 3 && crust == 3) {
        printf("\n*** You get free garlic bread! ***\n");
    }

    
    printf("\n--- Receipt ---\n");
    printf("Pizza subtotal: %f\n", pizzaCost);
    printf("Crust cost:     %f\n", crustCost);
    printf("Cheese cost:    %f\n", cheeseCost);
    printf("Final Total:    %f\n", total);

    return 0;
}



