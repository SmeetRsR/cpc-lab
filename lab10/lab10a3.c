#include<stdio.h>

int main(){
    int n,i=1,count=0;
    printf("enter any number:");
    scanf("%d",&n);
    for(;i<=n;i++)
    {
        if(n%i==0){
            count++;
        }
    }    
    if(count==2){
        printf("prime number");
    }   
    else{
        printf("not a prime number");
    } 
}