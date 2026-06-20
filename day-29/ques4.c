#include <stdio.h>

int main() {
    int itemId[100], quantity[100];
    char itemName[100][50];
    int n, i;

    printf("Enter number of items: ");
    scanf("%d", &n);

    // Input item details
    for(i = 0; i < n; i++) {
        printf("\nItem %d\n", i + 1);

        printf("Enter Item ID: ");
        scanf("%d", &itemId[i]);

        printf("Enter Item Name: ");
        scanf("%s", itemName[i]);

        printf("Enter Quantity: ");
        scanf("%d", &quantity[i]);
    }

    // Display inventory
    printf("\n===== INVENTORY RECORDS =====\n");
    printf("ID\tItem Name\tQuantity\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t\t%d\n", itemId[i], itemName[i], quantity[i]);
    }

    return 0;
}