#include<stdio.h>
int main(){
	int i=1,a,n,sum=0;
	printf("enter any number here: ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		a=i*i;
		sum=sum+a;
		i++;
	}
	printf("sum of the squares to %d is: %d",n,sum);
}
