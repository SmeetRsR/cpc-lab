#include<stdio.h>
int  main(){
int t,n=1;
printf("enter table: ");
scanf("%d",&t);

while(n<=10){
    printf("%d x %d =%d",t,n,t*n);
    n++;
    printf("\n");
}
}