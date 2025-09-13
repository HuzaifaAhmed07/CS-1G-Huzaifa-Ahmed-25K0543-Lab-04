#include <stdio.h>

int main() {
    int pizza;
    printf("How many small pizzas do you want? ");
    scanf("%d", &pizza);

    if (pizza > 1) {
        printf("Check our multi-pizza deals.\n");
    } else {
        printf("Your total is $8.\n");
    }

    return 0;
}

