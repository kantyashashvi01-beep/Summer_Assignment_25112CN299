#include <stdio.h>

int main() {
    int totalSeats = 50;
    int bookedSeats, availableSeats;

    printf("===== TICKET BOOKING SYSTEM =====\n");

    printf("Total Seats Available: %d\n", totalSeats);

    printf("Enter number of seats to book: ");
    scanf("%d", &bookedSeats);

    if(bookedSeats <= totalSeats) {
        availableSeats = totalSeats - bookedSeats;

        printf("\nBooking Successful!\n");
        printf("Booked Seats    : %d\n", bookedSeats);
        printf("Available Seats : %d\n", availableSeats);
    } else {
        printf("\nSorry! Only %d seats are available.\n", totalSeats);
    }

    return 0;
}