#include<stdio.h>

int main(){
    int n=0,x,cd=0,i=0;
    int a[7]={1,2,4,5,7,8,10};
    n=a[1]-a[0];

    for ( i = 0; i <6; i++)
    {
        cd=a[i+1]-a[i];
       if (cd>n)
       {
        printf("%d ",a[i]+n);
       }
       
    }
    

}