#include <stdio.h>

int main() {
    int num1, num2, num3, highest, lowest, difference;


    printf("Enter three numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);


    highest = num1;
    if (num2 > highest) {
        highest = num2;
    }
    if (num3 > highest) {
        highest = num3;
    }

    lowest = num1;
    if (num2 < lowest) {
        lowest = num2;
    }
    if (num3 < lowest) {
        lowest = num3;
    }

    difference = highest - lowest;

    printf("The difference between the highest and lowest number is: %d\n", difference);

    return 0;
}

