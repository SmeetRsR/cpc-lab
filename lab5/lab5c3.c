#include<stdio.h>
void main(){
int a,choice,b;
printf("enter a number: ");
scanf("%d",&a);

printf("enter 1 for multipling with 2\n");
printf("enter 2 for division with 2     ");
scanf("%d",&choice);

if (choice==1)
 b=a<<1;
else
 b=a>>1;

printf("ans= %d",b);

}