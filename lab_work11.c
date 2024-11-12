#include <stdio.h>

int main() {
    float income, tax;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income <= 150000) {
        tax = 0;
    } else if (income <= 300000) {
        tax = (income - 150000) * 0.10;
    } else if (income <= 500000) {
        tax = (income - 300000) * 0.20 + 15000;
    } else {
        tax = (income - 500000) * 0.30 + 45000;
    }

    printf("The calculated tax is: %.2f\n", tax);

    return 0;
}

