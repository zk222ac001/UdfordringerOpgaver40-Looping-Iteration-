#include <stdio.h>

int main() {
    int mileage, months;

    // Input mileage and months
    printf("Enter mileage since last oil change: ");
    scanf_s("%d", &mileage);
    printf("Enter months since last oil change: ");
    scanf_s("%d", &months);

    // Check if oil change is needed
    if (mileage > 10000 || months > 12) {
        printf("Du SKAL skift Bil Olie\n");
    }
    else {
        printf("OK ! Du kan Ikke\n");
    }

    return 0;
}
