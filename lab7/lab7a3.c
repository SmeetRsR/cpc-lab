#include<stdio.h>
int main (){
    float a,b,total;
    int choice;
    printf("enter number a: ");
    scanf("%f",&a);
    printf("enter number b: ");
    scanf("%f\n",&b);
 
    printf(" 1. for addition\n 2. for substraction\n 3. for multiplication\n 4. for division:  \n");
    scanf("%d",&choice);
    if(choice>4 || choice<=0){
        printf("invalid input,choice must be from (1to4)");
    }

    switch(choice){
        case 1:total=a+b;
         break;
        case 2:total=a-b;
         break;
        case 3:total=a*b;
         break;
        case 4:total=a/b;
        break;
    }
    printf("ans= %.2f",total);
}