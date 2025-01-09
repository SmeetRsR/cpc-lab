#include<stdio.h>
int main(){
int n,i=101;
printf("the number divisible by 7 but not divisible by 5 are:\n");
while(i<200)
{
    if(i%7==0)
    {
        if(i%5!=0)
        {
            printf("%d\n",i);
        }
    }
    i++;
}

}