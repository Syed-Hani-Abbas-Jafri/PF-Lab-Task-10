#include <stdio.h>

int main() {
    char *categories[3] = {"Appetizers", "Main Course", "Desserts"};

    char *items[3][3] = {
        {"Spring Rolls", "Garlic Bread", "Soup"},  /
        {"Grilled Chicken", "Burger", "Pasta"}, 
        {"Ice Cream", "Brownie", "Fruit Salad"}         
    };

    float prices[3][3] = {
        {5.5, 4.0, 6.0},   
        {12.0, 9.5, 11.0}, 
        {3.5, 4.5, 5.0}    
    };

    int i, j;

    printf("------ Welcome to Our Restaurant ------\n\n");
    for(i = 0; i < 3; i++) {
        printf("%s:\n", categories[i]);
        for(j = 0; j < 3; j++) {
            printf("  %-15s $%.2f\n", items[i][j], prices[i][j]);
        }
        printf("\n");
    }

    printf("------ Budget-Friendly Options (< $10) ------\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(prices[i][j] < 10.0) {
                printf("%-15s (%s) - $%.2f\n", items[i][j], categories[i], prices[i][j]);
            }
        }
    }

    return 0;
}
