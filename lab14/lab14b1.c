#include<stdio.h>

int main(){
    int i=0,n=5,sum=0,avg,num=0;
    int a[n];
while (i<n)
    {
    printf("enter the elements of array: ");
    scanf("%d",&a[i]);
    i++;
    }
    for ( i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    avg=sum/n;
for ( i = 0; i < n; i++)
{
    if (a[i]>avg)
    {
     num++;
    }
   
}
printf("total elements higher than average are:%d",num);
    
}