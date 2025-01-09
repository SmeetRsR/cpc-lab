#include <stdio.h>

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    
    int *ptr1 = array1;
    int *ptr2 = array2;
    int *temp;

    printf("Before swapping:\n");
    printf("Array 1: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr2[i]);
    }

   
    temp = ptr1;  
    ptr1 = ptr2;  
    ptr2 = temp; 

    printf("\n swapping:\n");
    printf("Array 1: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr2[i]);
    }

    return 0;
}
