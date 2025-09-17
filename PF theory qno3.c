#include <stdio.h>

int main()
{
    int candidateage;
    char eyesighttest, writtentest, drivingtest, medicaltest;

    
    printf("Enter your age: ");
    scanf("%d", &candidateage);

    if (candidateage < 18) {
        printf("You are ineligible for a driving license.\n");
        return 0;
    }

   
    printf("Have you passed (P) or failed (F) your eyesight exam? ");
    scanf(" %c", &eyesighttest);
    if (eyesighttest == 'F' || eyesighttest == 'f') {
        printf("You might need a prescription for glasses.\n");
        return 0;
    }

 
    printf("Have you passed (P) or failed (F) your written test? ");
    scanf(" %c", &writtentest);
    if (writtentest == 'F' || writtentest == 'f') {
        printf("You have to retry for the written test.\n");
        return 0;
    }

    
    printf("Have you passed (P) or failed (F) your driving test? ");
    scanf(" %c", &drivingtest);
    if (drivingtest == 'F' || drivingtest == 'f') {
        printf("You are not eligible for a driving license.\n");
        return 0;
    }

    
    if (candidateage > 60) {
        printf("Do you have a medical fitness certificate? (Y/N): ");
        scanf(" %c", &medicaltest);
        if (medicaltest == 'Y' || medicaltest == 'y') {
            printf("You are eligible for a driving license.\n");
        } else {
            printf("You are not eligible for a driving license.\n");
        }
    } else {
        printf("You are eligible for a driving license.\n");
    }

    return 0;
}
