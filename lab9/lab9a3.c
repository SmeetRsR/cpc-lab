#include<stdio.h>
int main(){

int b,e,i=1,ans=1;
printf("enter base:");      
scanf("%d",&b);

printf("enter power: ");    
scanf("%d",&e);

while(i<=e){
ans*=b;
i++;
}
printf("ans=%d",ans);
}