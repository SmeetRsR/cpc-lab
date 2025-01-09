#include<stdio.h>
int main(){
    int i=1, evennum=0, oddnum=0,n;
    while(i<11)
	{
    	printf("enter any number:");
    	scanf("%d",&n);
		if(n%2==0)
		{
			evennum++;
		}
		else
		{
			oddnum++;
		}
		i++;
	}
	printf("number of odd number is %d.\n",oddnum);
	printf("number of even number is %d.",evennum);	
}
