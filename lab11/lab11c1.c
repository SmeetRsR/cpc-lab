#include<stdio.h>

int main(){
    int n,last,first,i;
    printf("enter any integer here:  ");
    scanf("%d",&n);

    last=n%10;

    for ( ;n>0;)
    {
       first=n%10;
       n=n/10;
    }
    printf("the first digit is:%d\n",first);
    printf("the last digit is:%d\n\n",last);

    first=first+last;
    last=first-last;
    first=first-last;

    printf("the swapped digits are:%d and %d",first,last);
    

    
}