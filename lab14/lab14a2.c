#include<stdio.h>

int main(){
    int n,i=0,pc=0,nc=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    while (i<n)
    {
    printf("enter the elements of array: ");
    scanf("%d",&a[i]);
    i++;
    }
    for ( i = 0; i <n; i++)
    {
       
       if (a[i]>0)
       {
       pc++;
       }
       else
       {
        nc++;
       }
    }
    printf("the number of postitive numbers are : %d",pc);
    printf("the number of negative elements are: %d",nc);
    
}