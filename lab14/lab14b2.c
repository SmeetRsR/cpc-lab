#include<stdio.h>
#include<math.h>
int main(){
    int i=0,n=5,sum=0,avg,num=0,multiply;
    int a[n];
    float gm,hm;
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
    multiply=a[0]*a[1]*a[2]*a[3]*a[4];
    gm=pow(multiply,(1.0/5.0));
    hm=((gm*gm)/avg);
    printf("the average of the elements is: %d\n",avg);
    printf("the geometric mean is: %.2f\n",gm);
    printf("the harmonic mean is: %.2f",hm);
}