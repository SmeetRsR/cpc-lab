#include <stdio.h>

int main(){
    int n,last,rem,first,rev;
    printf("enter any number:");
    scanf("%d",&n);

    last=n%10;
    while (n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    first=rem;
    printf("the first digit is %d and last digit is %d\n",first,last);
    printf("the sum of first and last digit is %d", first + last);
    return 0;
} 