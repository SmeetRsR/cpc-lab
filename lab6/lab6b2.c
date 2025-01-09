#include<stdio.h>
#include <math.h>
void main(){
float a,b,c,root1,root2;
printf("\n");
printf("     ax^2+bx+c     \n");
printf("enter a: ");
scanf("%f",&a);

printf("enter b: ");
scanf("%f",&b);

printf("enter c: ");
scanf("%f",&c);

root1=((-b)+sqrt((b*b)-(4*a*c)))/(2*a);
root2=((-b)-sqrt((b*b)-(4*a*c)))/(2*a);

printf("roots are %.2f and %.2f",root1,root2);

}