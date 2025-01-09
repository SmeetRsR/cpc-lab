#include<stdio.h>

int main(){
    int i,j,x=0,y=0;
  
    printf("enter the value of x: ");
    scanf("%d",&x);
    printf("enter the value of y: ");
    scanf("%d",&y);
      int a[x][y];

    for ( i = 0; i <x ; i++)
    {
        for ( j = 0; j <y; j++)
         {
           printf("enter the element of array: ");
           scanf("%d",&a[i][j]);
         } 
    }
        for (i = 0; i <x; i++) {
                for (j = 0; j <y; j++) {
                    printf("%d ", a[i][j]);
                }
                printf("\n");
    
}
}