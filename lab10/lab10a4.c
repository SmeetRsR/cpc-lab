#include<stdio.h>

int main(){
    int n,rem;
    printf("enter number here: ");
    scanf("%d",&n);
    printf("the digit in the given number are:\n");
    while (n>0)
    {
        rem=n%10;
        n/=10;
        printf("%d\n",rem);
    }
}