#include<stdio.h>

int main(){
    int a,b,*ptr1,*ptr2;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    ptr1=&a;
    ptr2=&b;
    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;

    printf("the value of a is: %d\n",*ptr1);
    printf("the value of b is: %d",*ptr2);
}