#include<stdio.h>

int main(){
    int a,b,i=1,x,y,hcf,num,lcm=1;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);

    if(a<b){
        num=a;
    }
    else{
        num=b;
    }
    for(;i<=num;i++){
      if(a%i==0 && b%i==0){
        hcf=i;
      }
    }
    printf("HCF IS %d\n",hcf);
    
    lcm=(a*b)/hcf;
  
    printf("LCM is %d",lcm);
}
