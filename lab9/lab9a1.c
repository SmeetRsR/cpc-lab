#include<stdio.h>
void main(){
int a=2,i,n=1,sum=0;
printf("enter i: ");
scanf("%d",&i);

while(n<=i){
if(a%2==0){
    sum+=n;
}
else{
    sum-=n;
}
n++;
a++;
}
printf("ans= %d",sum);
}