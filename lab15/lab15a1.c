#include<stdio.h>

int main(){
    int n,i=0,j=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    int b[n];
    while (i<n)
    {
    printf("enter the elements of array: ");
    scanf("%d",&a[i]);
    i++;
    }
    printf("the elements of b are: \n");
    while (j<n)
    {
       b[j]=a[j];
     printf("%d",b[j]);
       j++;
    }

    
}