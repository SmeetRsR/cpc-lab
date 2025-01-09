#include<stdio.h>
int main(){
    int n,a,b;
    printf("enter number: ");
    scanf("%d",&n);
       
    while(n>0){
        a=n%2;
        n/=2;
        printf("%d",a);

    }
    // printf("%d\n",b);
    /*int rev=0,rem;
    while(b>0){
        rem=b%10;
        rev=rev*10+rem;
        b/=10;
    }
    //rev/=10;
    printf("binary=%d ",rev);*/
}