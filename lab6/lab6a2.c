#include <stdio.h>
void main(){

float salary,hra,da,total;
printf("enter your salary: ");
scanf("%f",&salary);

if(salary>=10000&&salary<20000){
  hra=0.2*salary;
  da=0.8*salary;
}

//mistake:-used if ladder instead of il else ladder 

else if(salary>=20000&&salary<30000){
  hra=0.25*salary;
  da=0.9*salary;
}
else{
    hra=0.3*salary;
    da=0.95*salary;
}
printf("\n");
printf("HRA= %f\n",hra);
printf("DA= %f\n",da);
printf("total salary= %f",salary+hra+da);
  
}
