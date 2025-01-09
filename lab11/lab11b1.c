#include<stdio.h>

int main(){
    int first=0,second=1,n,i=0,next=0;
    printf("enter any number here: ");
    scanf("%d",&n);
    if (n==0)
    {
        printf("%d",first);
    }

    else if (n==1)
    {
        printf("%d",first);
        printf("%d",second);
    }
    else{
        printf("%d",first);
        printf("%d",second);
    for(i=2;i<n;i++){
    
        next=first+second;
        printf("%d",next);
        first=second;
        second=next;
    }
 }
}