#include<stdio.h>

int main(){
    int i=0,j= 0,pc=0,nc=0,zc=0;
    int a[3][3];
    for ( i = 0; i < 3; i++)
    {
     for ( j = 0; j < 3; j++)
     {
       printf("enter the elements of array: ");
       scanf ("%d",&a[i][j]);
     }
     
    }

    for ( i = 0; i < 3; i++)
    {
     for ( j = 0; j < 3; j++)
     {
       if (a[i][j]>0)
       {
        pc++;
       }
       else if (a[i][j]<0)
       {
        nc++;
       }
       else{
        zc++;
       }            
     }     
    }
    printf("positive count= %d\n",pc);
    printf("negative count= %d\n",nc);
    printf("zero count= %d",zc);
    
}