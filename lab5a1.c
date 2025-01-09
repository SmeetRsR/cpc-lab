#include <stdio.h>
void main(){
    float inches,feet;
    printf("enter length in feet: ");
    scanf("%f",&feet);

    inches=feet*12;

    printf("length in inches: %.2f",inches);
}