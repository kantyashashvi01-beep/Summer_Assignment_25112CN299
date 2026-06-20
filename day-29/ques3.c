#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    do {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Check Palindrome\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2: {
                char rev[100];
                int i, len = strlen(str);

                for(i = 0; i < len; i++) {
                    rev[i] = str[len - i - 1];
                }
                rev[len] = '\0';

                printf("Reversed String = %s\n", rev);
                break;
            }

            case 3: {
                int i;
                for(i = 0; str[i] != '\0'; i++) {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }
                printf("Uppercase String = %s\n", str);
                break;
            }

            case 4: {
                int i, len = strlen(str), flag = 1;

                for(i = 0; i < len / 2; i++) {
                    if(str[i] != str[len - i - 1]) {
                        flag = 0;
                        break;
                    }
                }

                if(flag)
                    printf("String is Palindrome\n");
                else
                    printf("String is Not Palindrome\n");
                break;
            }

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}