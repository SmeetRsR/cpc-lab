#include<stdio.h>
int main(){
int unit;
float total,bill;
printf("enter number of units: ");
scanf("%f",&unit);

if(unit<=50)
 bill=0.5*unit;
else if(unit<=150)
 bill=((50)*0.5)+(unit-50)*0.75;
else if(unit<=250)
 bill=(50*0.5)+(100*0.75)+(unit-150)*1.2;
else
 bill=(50*0.5)+(100*0.75)+(100*1.2)+(unit-250)*1.5;

total=bill+0.2*bill;

printf("total bill is: %.2f",total);
return 0;
}