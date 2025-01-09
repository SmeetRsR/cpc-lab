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
    i=0;
    while (i<n)
    {
        if (a[i]<0){
            printf("%d is a negative element.\n",a[i]);
        }
        i++;
    }  
    
}