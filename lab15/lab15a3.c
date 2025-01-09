#include<stdio.h>

int main(){
    int n,i=0,count=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    while (i<n)
    {
    printf("enter the elements of array: ");
    scanf("%d",&a[i]);
    i++;
    }
    for ( i = 0; i < n; i++)
    {
      if (a[i]%3==0)
      {
        count++;
      }
      
    }
    printf("number of elements divisible by 3 are: %d",count);
    
}