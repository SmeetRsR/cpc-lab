#include<stdio.h>
int main(){
char ch='A';
while((ch>=65 && ch<=90)){
    printf("%c ",ch);
    ch++;
}
ch=97;
printf("\n");
while((ch>=97&&ch<=122)){
    printf("%c ",ch);
    ch++;
}
}