#include<stdio.h>

int main(){
    int a,*ptr1,*ptr2,*ptr3,*ptr4;
    float b;
    double c;
    char e;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%lf",&c);
    printf("Enter the value of e: ");
    scanf("%c",&e);    
    ptr1=&a;
    ptr2=&b;
    ptr3=&c;
    ptr4=&e;
    printf("the address of a is:  %d\n",ptr1);
    printf("the address of b is:  %d\n",ptr2);
    printf("the address of c is:  %d\n",ptr3);
    printf("the address of e is:  %d\n",ptr4);

}