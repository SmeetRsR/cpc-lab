#include<stdio.h>

int main(){
    int n,i=0,j,temp;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    while (i<n)
    {
    printf("enter the elements of array: ");
    scanf("%d",&a[i]);
    i++;
    }
    for ( i = 0; i < n/2; i++)
    {
       temp=a[i];
       a[i]=a[n-i-1];
       a[n-i-1]=temp;
    }
    
    printf("the reversed array is: ");
    for ( i = 0; i < n; i++)
    {
       printf("%d ",a[i]);
    }
}
    
    
