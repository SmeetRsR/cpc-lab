#include <stdio.h>
#include <math.h>

int main() {
    int num, or, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    or = num;

    // Count the number of digits in num
    while (or != 0) {
        or /= 10;
        ++n;
    }

  or = num;

    // Calculate the sum of the power of digits
    while (or != 0) {
        remainder = or % 10;
        result += pow(remainder, n);
        or /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == num) {
        printf("it is an Armstrong number.\n");
    } else {
        printf(" it is not an Armstrong number.\n");
    }

    return 0;
}
