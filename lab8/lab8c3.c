#include<stdio.h>
int main(){
	int rem=0,divisor,dividend,quotient=0;
	printf("enter  larger number: ");
	scanf("%d",&dividend);
	printf("enter smaller number: ");
	scanf("%d",&divisor);
	rem=dividend;
	while(divisor<=rem)
	{
		rem=rem-divisor;
		quotient++;
	}
	printf("\n");
	printf("value of remainder is: %d\n",rem);
	printf("value of quotient is: %d",quotient);
}

