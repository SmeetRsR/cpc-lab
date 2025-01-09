#include<stdio.h>

int main(){
    int i,n,ans=1;
    printf("enter any number here: ");
    scanf("%d",&n);

    for ( i = 0; i <n; i++)
    {
        ans*=(n-i);
    }
    printf("%d",ans);
}