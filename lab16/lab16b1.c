#include<stdio.h>

int main(){
    int i=0,j= 0,sum=0;
    int a[3][3];
    int transpose[3][3];
    for ( i = 0; i < 3; i++)
    {
     for ( j = 0; j < 3; j++)
     {
       printf("enter the elements of array: ");
       scanf ("%d",&a[i][j]);
     }
     }

    printf("the original matrix is: \n");
     for ( i = 0; i < 3; i++)
    {
     for ( j = 0; j < 3; j++)
     {
       printf("%d",a[i][j]);
     }
     printf("\n");
     }

     for ( i = 0; i < 3; i++)
    {
     for ( j = 0; j < 3; j++)
     {
       transpose[j][i]=a[i][j];
     }
     }
     
     printf("The transposed matrix is: \n");
     for ( i = 0; i < 3; i++)
    {
     for ( j = 0; j < 3; j++)
     {
       printf("%d",transpose[i][j]);
     }
     printf("\n");
     }
     
     
}