#include<stdio.h>

int interest(int p,int r, int t){
    int result=(p*r*t)/100;
    return result;
}

int main(){
    int p,t,r,result;
    printf("enter principal amount: ");
    scanf("%d",&p);
    printf("enter rate: ");
    scanf("%d",&r);
    printf("enter time period: ");
    scanf("%d",&t);
    result=interest(p,r,t);
    printf("Simple interest is: %d",result);

}