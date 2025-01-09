#include<stdio.h>

int main(){
    int i,n,sum=0;
    printf("enter number here:");
    scanf("%d",&n);

    for ( i=0;i<=n ;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    
}