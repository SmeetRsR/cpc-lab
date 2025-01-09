#include<stdio.h>


int main(){
    int n,i=0,max,min;
    float avg=0,sum=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    while (i<n)
    {
    printf("enter the elements of array: ");
    scanf("%d",&a[i]);
    i++;
    }
    max=min=a[0];
    for ( i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
           max=a[i];
        }
        if (a[i]<min)
        {
           min=a[i];
        }
                   
    }
        for ( i = 0; i < n; i++)
    {
        sum+=a[i];  
    }
    avg=sum/n;

    printf("the maximum value of an element is:%d\n",max);
    printf("the minimum value of an element is:%d\n",min);
    printf("the sum of  elements is:%.2f\n",sum);
    printf("the avg of  elements is:%.2f\n",avg);

}