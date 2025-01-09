#include <stdio.h>

int main() {
    int n, i = 1, count = 0;

    printf("Enter number here: ");
    scanf("%d", &n);

  
    while (i < n) {
        if (n % i == 0) {
            count += i; 
        }
        i++;
    }

    if (count == n) {
        printf("Perfect number\n");
    } else {
        printf("Not a perfect number\n");
    }

    return 0;
}
