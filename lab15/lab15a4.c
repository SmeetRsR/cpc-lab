#include<stdio.h>

int main(){
    int n,i=0,count=0,element;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    while (i<n)
    {
    printf("enter the elements of array: ");
    scanf("%d",&a[i]);
    i++;
    }
    printf("\n\n");
    printf("enter the element you want to search: ");
    scanf("%d",&element);
    for ( i = 0; i <n; i++)
    {
        if (a[i]==element)
        {
          count++;
        }
    }
    if (count>0)
    {
        printf("the element is present in the array");
    }
    else
    {
        printf("the element is not present in the array");
    }
   
    
    
    
    
}