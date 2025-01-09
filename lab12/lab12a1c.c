#include<stdio.h>

int main(){
    int i,j,n;
    printf("enter any number here: ");
    scanf("%d",&n);

    for ( i = 0; i <=n; i++)
    {
       for(j=n;j>=n-i+1;j--){
            printf("%d",j);
       }
    printf("\n");
    }
    
}