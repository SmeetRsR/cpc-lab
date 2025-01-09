#include<stdio.h>

int main(){
    int n,i=0,*ptr;
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
    i=0;

    while (i<n)
    {
        ptr=&a[i];
        b[i]=*ptr;
        printf("%d ",b[i]);
        i++;
    }
    
}