#include <stdio.h>
void main(){
char a;

printf("enter a character: ");
scanf("%c",&a);

if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
//if(a=='a'||'b') 
 printf("character entered is vowel");
else
 printf("character entered is consonant");

}