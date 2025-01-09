#include<stdio.h>

int main(){
    int i,j,x,y,m,n;
    int a[2][2],b[2][2],c[2][2];
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("enter the value of array a: ");
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("\n");

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("enter the value of array b: ");
            scanf("%d",&b[i][j]);
        }
        
    }
    // for (  i = 0; i < 3; i++)
    // {
    //     for ( j = 0; j < 3; j++)
    //     {
    //        c[i][j]=0;
    //     }
        
    // }
    
    for ( i = 0; i < 3; i++)
    {
       for ( j = 0; j < 3; j++)
       {
        c[i][j]=a[i][j]+b[i][j];
       }
       
    }
   

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
           
            //   c[m][n]=a[i][j]+b[x][y];   
            printf("%d",c[i][j]);
           
            
               
        }

}
    
    
    
    
    
}