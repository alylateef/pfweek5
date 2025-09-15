#include <stdio.h>

int main() {
    float att;
    char mid, fee;
    
    
    printf("Enter your attendance percentage: ");
    scanf("%f", &att);
    if (att < 75.0) {
        printf("Not eligible. Low attendance.\n");
        return 0;
    }
    printf("Cleared midterm? (P/F): ");
    scanf(" %c", &mid);
    if (mid == 'F' || mid == 'f') {
        printf("Not eligible. Failed midterm.\n");
        return 0;
    }
    printf("Paid exam fee? (Y/N): ");
    scanf(" %c", &fee);

    if (fee == 'Y' || fee == 'y') {
        printf("You are eligible for the Final Exam!\n");
    } else {
        printf("Please clear your dues first.\n");
    }
    return 0;
}
