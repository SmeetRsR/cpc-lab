#include<stdio.h>

int compare(int a, int b){
    int result= a>b?a:b;
    return result;
}

int main(){
    int a,b,result;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    result=compare(a,b);
    if (result==a)
    {
       printf("maximum is: %d",a);
    }
    if (result==b){
        printf("maximum is: %d",b);
    }
    return 0;

}