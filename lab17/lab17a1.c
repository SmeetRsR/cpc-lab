#include<stdio.h>

int main(){
    int a,*ptr;
    printf("enter any number here: ");
    scanf("%d",&a);
    ptr=&a;

    printf("the value of a is %d and its address is %p",*ptr,ptr);

}