#include<stdio.h>

int main(){
    int i,j,m=0,n;
    printf("enter any number here: ");
    scanf("%d",&n);    
    for ( i = 1; i <=n; i++)
    {
        for ( j = 0; j<i; j++)
        {
            m++;
            printf("%d ",m);
        }
        printf("\n");
    }
    
}