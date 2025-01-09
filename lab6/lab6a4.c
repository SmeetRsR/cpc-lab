#include <stdio.h>
void main(){
    int a,b;
    printf("enter number: ");
    scanf("%d",&a);
    
    b=a%10;

    if(b%2==0)
     printf("last digit is even");
    else
     printf("last digit is odd");
}