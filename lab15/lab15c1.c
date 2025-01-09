#include<stdio.h>

int main(){
    int a[5]={1,2,3,4,5,};
    int i,largest=0,slargest=0;
    largest=a[0];
    for ( i = 0; i < 5; i++)
    {
        if (a[i]>largest)
        {
            largest=a[i];
        }
        
    }
    printf(" the largest element is: %d\n",largest);

    for ( i = 0; i < 5; i++)
    {
        
        if (a[i]>a[0] && a[i]<largest)
        {
            slargest=a[i];
        }
        
    }
    printf("the second largest element is:");
    printf("%d",slargest);

    
}