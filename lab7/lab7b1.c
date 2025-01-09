#include<stdio.h>
int main(){
    int a,b,c,multiply;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    printf("enter c: ");
    scanf("%d",&c);

    multiply=(a>b)?(a*c):(b*c);

    printf("answer= %d",multiply);
}