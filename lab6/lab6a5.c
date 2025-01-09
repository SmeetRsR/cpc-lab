#include <stdio.h>

void main(){
    int s1,s2,s3,s4,s5;
    float avg;
    printf("marks out of hundred\n"); 
    printf("enter marks of subject 1: ");
    scanf("%d",&s1);
    printf("enter marks of subject 2: ");
    scanf("%d",&s2);
    printf("enter marks of subject 3: ");
    scanf("%d",&s3);
    printf("enter marks of subject 4: ");
    scanf("%d",&s4);
    printf("enter marks of subject 5: ");
    scanf("%d",&s5);

    avg=(s1+s2+s3+s4+s5)/5;
    printf("average= %.2f\n",avg);

    if(avg>70)
     printf("distinction");
    else if(avg>=61)
     printf("first class");
    else if(avg>=46)
     printf("second class");
    else if(avg>=36)
     printf("third class");
    else 
     printf("fail");
}