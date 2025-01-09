#include<stdio.h>
#include<string.h>

int main(){
    int length;
   char str1[100];
    printf("enter a string here: ");
    gets(str1);

    printf("\n");
    printf("%s\n",str1);
    length=strlen(str1);
    printf("the length of given string is: %d",length);
    
}