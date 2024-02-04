#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a number
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int number) {
    int originalNumber = number;
    int digitCount = countDigits(number);
    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum += pow(digit, digitCount);
        number /= 10;
    }

    return (sum == originalNumber);
}

int main() {
    int number;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is an Armstrong number
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
