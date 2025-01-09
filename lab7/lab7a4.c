#include<stdio.h>

int main(){
    int a,b,c,largest;

printf("enter a: ");
scanf("%d",&a);
printf("enter b: ");
scanf("%d",&b);
printf("enter c: ");
scanf("%d",&b);

    (a>b)?((a>c)?(largest=a):(largest=c)):((b>c)?(largest=b):(largest=c));
    printf("largest no. is %d",largest);
    return 0;
}