#include<stdio.h>
void main(){
	int a,b,multi,i;
	printf("Enter  First Number: ");
	scanf("%d",&a);
	printf("Enter  Second Number: ");
	scanf("%d",&b);
	multi=0;
	i=1;
	while(i<=b)
	{
		multi+=a;
		i++;
	}
	printf("Multiplication of Two Numbers is: %d",multi);
}
