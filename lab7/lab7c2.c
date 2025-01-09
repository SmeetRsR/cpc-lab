#include<stdio.h>
int main(){
int month;

printf("enter number of month: ");
scanf("%d",&month);
if (month>12 || month<=0)
{
   printf("invalid input ,month must be between (1 to 12)");
}
else{
switch(month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: printf("31 days");
     break;
    case 2: printf("29 days");
     break;
    case 4:
    case 6:
    case 9:
    case 11: printf("30 days");
    }
}
}