#include<stdio.h>

int main(){
    int n,i=0,j,duplicate=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int a[n];
   
    while (i<n)
    {
    printf("enter the elements of array: ");
    scanf("%d",&a[i]);
    i++;
    }
    for ( i = 0; i < n-1; i++)
    {
        for (j = 0; j <n-1; j++)
        {
            if (a[i]==a[i+j+1])
            {
            duplicate++;
            }
           
        }
        
        
    }
    printf(" the number of duplicate elements are: %d",duplicate-1);

    
}