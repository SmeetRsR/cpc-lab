#include<stdio.h>

int main(){
    int i,j,sum=0,n;
    printf("enter any number here: ");
    scanf("%d",&n);

    for ( i = 0; i <=n; i++)
    {
        sum+=((i*(i+1))/2);
    }
    printf("%d",sum);

}