#include<stdio.h>
int main() {
int a,b,c,second;

printf("enter a: ");
scanf("%d",&a);
printf("enter b: ");
scanf("%d",&b);
printf("enter c: ");
scanf("%d",&c);
if(a>b){
    if(b>c)
     second=b;
    else
     second=c;
}
else{
    if(a>c)
     second=a;
    else 
     second=b;
}
printf("2nd largest value is: %d",second);
return 0;
}