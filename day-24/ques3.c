#include <stdio.h>
#include <string.h>

int main() {
    char str[10][100], longest[100];
    int n, i, maxLen = 0;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for(i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    for(i = 0; i < n; i++) {
        if(strlen(str[i]) > maxLen) {
            maxLen = strlen(str[i]);
            strcpy(longest, str[i]);
        }
    }

    printf("Longest string: %s\n", longest);
    printf("Length: %d", maxLen);

    return 0;
}