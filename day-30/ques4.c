#include <stdio.h>

int roll[100], marks[100], n;
char name[100][50];

void addStudents() {
    int i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }
}

void displayStudents() {
    int i;

    printf("\n===== STUDENT RECORDS =====\n");
    printf("Roll No\tName\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }
}

void searchStudent() {
    int r, i, found = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &r);

    for(i = 0; i < n; i++) {
        if(roll[i] == r) {
            printf("\nStudent Found\n");
            printf("Roll No: %d\n", roll[i]);
            printf("Name: %s\n", name[i]);
            printf("Marks: %d\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Students\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudents();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}