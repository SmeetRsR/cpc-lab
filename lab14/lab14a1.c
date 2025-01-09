#include<stdio.h>

int main(){
    int n,i=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    while (i<n)
    {
    printf("enter the elements of array: ");
    scanf("%d",&a[i]);
    i++;
    }
    printf("the elements of array are : ");
    for ( i = 0; i < n; i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");
   printf("The elements of the array in reverse order are: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
}