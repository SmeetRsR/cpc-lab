#include<stdio.h>
int funcfact();
int main(){
    int n;
    printf("enter no");
    scanf("%d",&n);
    int res = funcfact(n);
    printf("%d",res);

}
int funcfact(int x){
    if(x==1){
        return 1;
    }
    else{
        return x*funcfact(x-1);
    }
    return 0;
}