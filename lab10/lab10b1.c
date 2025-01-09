#include<stdio.h>

int main(){
     int n,sum=0,i=1;
     printf("enter any number here: ");
     scanf("%d",&n);
     while (i<n)
     {
        if(n%i==0){
            sum+=i;
        }
        i++;
     }
    if(sum==n){
        printf("it is a perfect number");
    }
    else{
        printf("not a perfect number");
    }
     
}