#include<stdio.h>

int main(){
    int n ,rem=0,rev=0;
    printf("enter number here: ");
    scanf("%d",&n);

    while (n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("the reverse number is: %d",rev);
    
}