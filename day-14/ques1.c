#include <stdio.h>

int main() {
    int n, key, pos = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        printf("%d found at position %d\n", key, pos + 1);
    else
        printf("%d not found in the array\n", key);

    return 0;
}