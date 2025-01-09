#include<stdio.h>
void main(){
    int a,b,choice;
    printf("enter a: ");
    scanf("%d",&a);

    printf("enter b: ");
    scanf("%d",&b);
    printf("\n");

    printf("enter 1 for addition\n");
    printf("enter 2 for substraction\n");
    printf("enter 3 for multiplication\n");
    printf("enter 4 for division\n");
    scanf("%d",&choice);

    if(choice==1)
     printf("ans= %d",a+b);
    else if(choice==2)
     printf("ans= %d",a-b);
    else if(choice==3)
     printf("ans= %d",a*b);
    else
     printf("ans= %d",a/b);

}