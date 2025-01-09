#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("enter any number:");
    scanf("%d",&n);
    while(i<=n){
        sum+=i;
        i+=1;
        }
        printf("answer is :%d",sum);
 
}
