#include<stdio.h>

int main(){
    int i,j,n;
    printf("enter any number here: ");
    scanf("%d",&n);
    for ( i = 0; i <=n; i++)
    {
       for ( j = 0; j <=i; j++)
       {
        if ((i+j)%2==0)
        {
            printf("1");
        }
        else{
            printf("0");
        }
        
       }
       printf("\n");
    }
    
}