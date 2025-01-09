#include<stdio.h>

int main(){
    int i=0,temp=0,n;
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
        a[i]=a[n-1-i];
        a[n-1-i]=temp;

    }
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    
    
}
