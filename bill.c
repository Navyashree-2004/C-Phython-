#include <stdio.h>
#include <string.h>
float calculateBill(char wardType, int days) {
    float ratePerDay;
    if (wardType == 'G') {
        ratePerDay = 1000;
    } else if (wardType == 'S') {
        ratePerDay = 2000;
    } else if (wardType == 'P') {
        ratePerDay = 5000;
    } else {
        printf("Invalid ward type.\n");
        return -1;
    }

    float totalBill = ratePerDay * days;

    if (days > 7) {
        float discount = totalBill * 0.05;
        totalBill -= discount;
    }
    
    return totalBill;
}

int main() {
    char patientName[100], wardType;
    int days;
    
    printf("Enter Patient Name: ");
    fgets(patientName, sizeof(patientName), stdin);
    patientName[strcspn(patientName, "\n")] = '\0';  

    printf("Enter Ward Type (G/S/P): ");
    scanf(" %c", &wardType);  
    printf("Enter Number of Days: ");
    scanf("%d", &days);

    float totalBill = calculateBill(wardType, days);
    
    if (totalBill != -1) {
        printf("\nPatient Name: %s\n", patientName);
        float Before Discount: (wardType == 'G') ? 1000 * days :  (wardType == 'S') ? 2000 * days :  5000 * days;
        
        printf("Total Bill Before Discount: ₹%.2f\n", Before Discount);
        
        if (days > 7) {
            float discount = (wardType == 'G') ? 1000 * days * 0.05 :
                             (wardType == 'S') ? 2000 * days * 0.05 : 5000 * days * 0.05;
            printf("Discount Applied: ₹%.2f\n", discount);
        } else {
            printf("Discount Applied: ₹0.00\n");
        }
        
        printf("Final Bill Amount: ₹%.2f\n", totalBill);
    }

    return 0;
}
