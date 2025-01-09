#include <stdio.h>
#include "cs50.h"
void main(){
int a,b,c,max;

a=get_int("enter a");
b=get_int("enter b");
c=get_int("enter c");

if(a>b){
    if(a>c){
     max=a;
    }
    else{
     max=c;
    }
}
else{
    if(b>c){
     max=b;
    }
    else{
     max=c;
    }
}
printf("max number is= %d",max);
}