#include<stdio.h>
int main(){
    int num;
    printf("enter number here: ");
    scanf("%d",&num);

    ((num%2)==1)?(printf("oddnumber")):(printf("evennumber"));
}