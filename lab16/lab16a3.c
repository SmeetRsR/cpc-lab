#include<stdio.h>

int main(){   
    int i=0,j= 0;
    int a[20][2];
    for ( i = 0; i < 20; i++)
    {
     for ( j = 0; j < 20; j++)
     {
      
       printf("enter the marks: ");
       scanf ("%d",&a[i][j]);
       printf("enter the roll number: ");
       scanf("%d",&a[i][j]);
     
     }
    }
    printf("\nRoll number \tMarks\n");
    for (i = 0; i < 20; i++) {
        printf("%d\t\t%d\n", a[i][0], a[i][1]);
    }
   
}