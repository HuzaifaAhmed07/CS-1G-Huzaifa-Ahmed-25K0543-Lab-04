#include <stdio.h>

int main() {
    int crust, qty, hour, deliveryOpt;
    char cheese, student;
    float pizzaCost, crustCost = 0, cheeseCost = 0, total = 0;

    // Assuming a base pizza cost from Q1–Q3, 
    
    pizzaCost = 8;  
    qty = 1;        

    // Q4: Crust type
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

    // Q5: Extra cheese
    printf("Extra cheese? (Y/N): ");
    scanf(" %c", &cheese);

    if (cheese == 'Y' || cheese == 'y') {
        cheeseCost = 1.5;
    }

    // Subtotal after crust + cheese
    total = pizzaCost + crustCost + cheeseCost;

    // Q6: Time discount (11am–2pm)
    printf("Enter current hour (0-23): ");
    scanf("%d", &hour);

    if (hour >= 11 && hour <= 14) {
        total = total * 0.90;  
    }

    // Q7: Student discount
    printf("Do you have a student ID? (Y/N): ");
    scanf(" %c", &student);

    if (student == 'Y' || student == 'y') {
        total = total - 2;
        if (total < 0) total = 0;  
    }

    // Q8: Free garlic bread condition
    if (qty == 3 && crust == 3) {
        printf("\n*** You get free garlic bread! ***\n");
    }

    // Q9: Delivery or Pickup
    printf("Pickup or Delivery? (1.Pickup, 2.Delivery): ");
    scanf("%d", &deliveryOpt);

    if (deliveryOpt == 2) {
        total = total + 3;
    }

    // Final output
    printf("\n--- Receipt ---\n");
    printf("Pizza base cost: %f\n", pizzaCost);
    printf("Crust cost:      %f\n", crustCost);
    printf("Cheese cost:     %f\n", cheeseCost);
    printf("Final Total:     %f\n", total);

    return 0;
}

