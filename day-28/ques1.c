#include <stdio.h>

int main() {
    int bookId[100], n, i;
    char bookName[100][50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Enter Book Name: ");
        scanf("%s", bookName[i]);
    }

    // Display book records
    printf("\n===== LIBRARY RECORDS =====\n");
    printf("Book ID\tBook Name\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\n", bookId[i], bookName[i]);
    }

    return 0;
}