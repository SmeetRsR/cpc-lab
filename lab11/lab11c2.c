#include<stdio.h>

int main(){
    int base,power,i,result=1,j;
    printf("enter base: ");
    scanf("%d",&base);
    printf("enter power:");
    scanf("%d",&power);

  
    for ( i = 0; i <power; i++)
    {
       int temp=0;

       for (j = 0; j <result ; j++)
       {
             temp+=base;
       }
        result=temp;
       
    }
    printf("%d",result);
    
}