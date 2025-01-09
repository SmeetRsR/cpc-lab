#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter number1:");
    scanf("%d",&num1);
    printf("Enter number2:");
    scanf("%d",&num2);
    num1+=1;
    while(num1<num2){
        if(num1%2==0){
            printf("%d\n",num1);
        }
        num1++;
    }
}
