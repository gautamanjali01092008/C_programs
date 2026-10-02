#include <stdio.h>

int main() {
    int n, temp, digit;
    int reverse_num = 0, sum_digits = 0, armstrong_sum = 0;
    int num_digits = 0;

    printf("Enter a positive integer to analyze:");
    scanf("%d", &n);

    // Basic input validation
    if (n < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // 1. Calculate total digits (Required for Armstrong power)
    temp = n;
    while (temp != 0) {
        temp /= 10;
        num_digits++;
    }

    // 2. Core Computational Loop
    temp = n;
    while (temp > 0) {
        digit = temp % 10; // Extract the last digit

        reverse_num = (reverse_num * 10) + digit; // Build reverse number
        sum_digits += digit;                      // Accumulate sum

        // Manual power calculation for Armstrong (digit ^ num_digits)
        int power = 1;
        for(int i = 0; i < num_digits; i++) {
            power *= digit;
        }
        armstrong_sum += power;

        temp /= 10; // Remove the last digit
    }

    // --- Output & Final Checks ---
    printf("\n--- Analysis for %d ---\n", n);
    printf("Reverse: %d\n", reverse_num);
    printf("Sum of digits: %d\n", sum_digits);

    // Palindrome Check
    if (n == reverse_num) {
        printf("Palindrome: Yes (Reads the same forwards and backwards)\n");
    } else {
        printf("Palindrome: No\n");
    }

    // Armstrong Check
    if (n == armstrong_sum) {
        printf("Armstrong Number: Yes (Sum of digits raised to power of length equals the number)\n");
    } else {
        printf("Armstrong Number: No\n");
    }

    return 0;
}