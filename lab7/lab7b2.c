#include <stdio.h>
int main(){
    char ch;
    printf("enter any character: ");
    scanf("%c",&ch);

    ((ch>=65&&ch<=90)||(ch>=97&&ch<=122))?(printf(" alphabet")):(printf("not an alphabet"));
    return 0;
}
