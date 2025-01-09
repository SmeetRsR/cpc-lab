#include<stdio.h>
int main(){
int fac,i=1,ans=1;

printf("enter number: ");
scanf("%d",&fac);

while(i<=fac){
    ans*=i;
    i++;
}
printf("ans=%d",ans);
}