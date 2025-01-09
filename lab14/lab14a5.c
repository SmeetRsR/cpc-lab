#include<stdio.h>

int main(){
    int n = 5, i = 0, person = 0;
    int a[n];
    int b[n];
    
    // Input heights
    for (i = 0; i < n; i++) {
        printf("Enter the height of person %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    printf("\n");
    
    // Input weights
    for (i = 0; i < n; i++) {
        printf("Enter the weight of person %d: ", i + 1);
        scanf("%d", &b[i]);
    }
    
    // Check conditions
    for (i = 0; i < n; i++) {
        if (a[i] > 170 && b[i] < 50) {
            person++;
        }
    }
    
    printf("Number of people having height greater than 170 & weight less than 50 are: %d", person);
    
    return 0;
}
