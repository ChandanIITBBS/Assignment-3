#include <stdio.h>

int main() {
    int dl;

    printf("Enter the number of days late: ");
    scanf("%d", &dl);

    int fine;
    if (dl <= 5) {
        fine = 1 * dl;
    }
    else if (dl <= 10) {
        fine = 2 * (dl - 5) + 5;
    }
    else if (dl <= 30) {
        fine = 5 * (dl - 10) + 15;
    }
    else {
        printf("Your membership is canceled! You returned the book more than 30 days late.\n");
    }

    printf("Fine: %d rupees\n", fine);

    return 0;
}