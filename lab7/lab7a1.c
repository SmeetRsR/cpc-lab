#include<stdio.h>
void main(){

int day;
printf("enter number of day : ");
scanf("%d",&day);
if (day>7 || day<=0)
{
    printf("invalid input,day must be between (1 to 7)");
}
else
{
  switch(day){
    case 1:printf("monday");
     break;
    case 2:printf("tuesday");
     break;
    case 3:printf("wednesday");
     break;
    case 4:printf("thursday");
     break;
    case 5:printf("friday");
     break;
    case 6:printf("saturday");
     break;
    case 7:printf("sunday");
     break;
}
}
}