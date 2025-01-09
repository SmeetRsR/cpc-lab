#include<stdio.h>
#include<math.h>

int main(){
    int i=11,j=1,n,pt;
    printf("enter any number here: ");
    scanf("%d",&n); 
    printf("1\n");
    while (j<=n)
    {
        pt=pow(11,j);
        printf("%d",pt);
        printf("\n");
        j++;
    }
    
}