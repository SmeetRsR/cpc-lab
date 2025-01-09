#include<stdio.h>
int main(){
float a,b,c;

printf("enter side a: ");
scanf("%f",&a);

printf("enter side b: ");
scanf("%f",&b);

printf("enter side c: ");
scanf("%f",&c);

if(a==b==c){
 printf("equilateral triangle ");
 
}
else if(a==b||b==c||a==c){
    printf("isoceles triangle ");
    
}
else{
    printf("scalene triangle ");
    
} 
if((a*a)+(b*b)==(c*c)||(a*a)+(c*c)==(b*b)||(b*b)+(c*c)==(a*a)){
 printf("and also right angle triangle.");
}

 return 0;
} 
 
