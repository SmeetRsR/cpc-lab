#include <stdio.h>
void replaceCharacter(char str[], char oldChar, char newChar);

int main() {
    char str[100];
    char oldChar, newChar;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the character to be replaced: ");
    oldChar = getchar();
    getchar(); // Consume newline character left by getchar()

    printf("Enter the new character: ");
    newChar = getchar();

    replaceCharacter(str, oldChar, newChar);

    printf("Modified string: %s\n", str);

    return 0;
}

// Function to replace character in string
void replaceCharacter(char str[], char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}
