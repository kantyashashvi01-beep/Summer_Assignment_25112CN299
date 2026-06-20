#include <stdio.h>

int main() {
    int n, i;
    char name[100][50];
    long long phone[100];

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    // Input contacts
    for(i = 0; i < n; i++) {
        printf("\nContact %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Phone Number: ");
        scanf("%lld", &phone[i]);
    }

    // Display contacts
    printf("\n===== CONTACT LIST =====\n");
    printf("Name\tPhone Number\n");

    for(i = 0; i < n; i++) {
        printf("%s\t%lld\n", name[i], phone[i]);
    }

    return 0;
}