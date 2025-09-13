#include <stdio.h>

int main() {
    int pizza, cost;
    printf("How many small pizzas do you want (1, 2, or 3)? ");
    scanf("%d", &pizza);

    if (pizza == 1) {
        cost = 8;
        printf("Your total is $%d for %d pizza.\n", cost, pizza);
    } else if (pizza == 2) {
        cost = 15;
        printf("Your total is $%d for %d pizzas.\n", cost, pizza);
    } else if (pizza == 3) {
        cost = 21;
        printf("Your total is $%d for %d pizzas.\n", cost, pizza);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}

