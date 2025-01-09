#include <stdio.h>

int main() {
    char str[100];
    printf("enter a string here: ");
    gets(str);
    char *ptr = str;  
    int len = 0;

    while (*ptr!= '\0') {
        len++;
        ptr++;  
    }

    printf("The length of the string is: %d\n", len);
    return 0;
}
