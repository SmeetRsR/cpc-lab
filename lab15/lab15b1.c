#include<stdio.h>

int main(){
    int n,i=0,j=0,count=0,element,b;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    int x[b];
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
                printf("%d\n",i);
            }  
        } 
    }
    for ( j = 0; j < n-1; j++)
    {
       
       if (b!=i)
       {
        printf("%d",x[b]);
       }
       
    }
    
    
    
}