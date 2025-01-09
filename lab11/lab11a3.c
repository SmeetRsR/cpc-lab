#include<stdio.h>

int main(){
    int n,i,ans=1;
    printf("enter the number to print table: ");
    scanf("%d",&n);

    for ( i = 0; i <=10; i++)
    {
        ans=n*i;
       printf("%d * %d = %d\n",n,i,ans);
    }
    
}