#include<stdio.h>

int max(int a, int b, int c){
    int result;
    if(a>b){
        if(a>c){
            result=a;
        }
        else{
            result=c;
        }
    }
    else{
    if (b>a)
    {           
        if (b>c)
        {
            result=b;
        }
        else
        {
            result=c;
        }   
    }
    }
    return result; 
}
 int main(){
    int a,b,c,result;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    printf("enter the value of c: ");
    scanf("%d",&c);
                            
    result=max(a,b,c);
    printf("max number is:%d ",result);

}