#include<stdio.h>

int sum(int a, int b){
    int result;
    result=a+b;
    return result;
}
int main(){
    int a,b,result;
    printf("enter value of a: ");
    scanf("%d",&a);
    printf("enter value of b: ");
    scanf("%d",&b);
    result=sum(a,b);
    printf("the sum is: %d",result);
    return 0;

}