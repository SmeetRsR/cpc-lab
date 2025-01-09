#include<stdio.h>

int main(){
    int n,i=0,evennum=0,oddnum=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    while (i<n)
    {
    printf("enter the elements of array: ");
    scanf("%d",&a[i]);
    i++;
    }
    for ( i = 0; i <n; i++)
    {
       
       if (a[i]%2==0)
       {
       evennum++;
       }
       else
       {
        oddnum++;
       }
    }
    printf("the number of even numbers are : %d\n",evennum);
    printf("the number of odd elements are: %d",oddnum);
    
}