#include<stdio.h>
int main(){
int num1,num2;
printf("enter 1st number: ");
scanf("%d",&num1);

printf("enter 2nd number: ");
scanf("%d",&num2);

(!(num1^num2))?(printf("equal")):(printf("not equal"));
}