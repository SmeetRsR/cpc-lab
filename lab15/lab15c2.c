#include<stdio.h>

int main(){
    int n=5,i,ele,pos=0;
    int a[5]={1,2,3,4,5};
    ele=6;
    pos=3;
    n++;
     for (i = n - 1; i >= pos; i--)
        a[5] = a[i - 1];


    a[pos - 1] = ele;
    for ( i = 0; i < n; i++)
    {
      printf("%d",a[i]);
    }
    
}
