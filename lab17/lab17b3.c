#include<stdio.h>

int main(){
    int i = 0, j = 0, n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int a[n][n], b[n][n], sum[n][n]; 

    //  matrix A
    printf("Enter the elements of matrix A: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the element A[%d][%d]: ", i, j);
            scanf("%d", (*(a + i) + j));  
        }
    }

    //matrix B
    printf("Enter the elements of matrix B: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the element B[%d][%d]: ", i, j);
            scanf("%d", (*(b + i) + j));  
        }
    }

    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            *(*(sum + i) + j) = *(*(a + i) + j) + *(*(b + i) + j); 
        }
    }


    printf("The sum of the matrices is: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t",**sum);
        }
        printf("\n");
    }

    return 0;
}