#include<stdio.h>

int main(){
    char ch;
    int i;

    for ( i = 0; i <=127; i++)
    {
        char ch = (char)i;
       printf("ASCII%d:  %c\n",i,ch);
    }
    
}