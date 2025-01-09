#include<stdio.h>
int main(){

int n,i=1;
printf("enter number:");
scanf("%d",&n);
printf("factors of given number are: ");
while(i<=n){
    
    if(n%i==0){
        printf("%d, ",i);
    }
    i++;
}
}