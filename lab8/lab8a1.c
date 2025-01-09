// #include<stdio.h>
// intmain(){
//     int i=1,n;
//     printf("enter any number:");
//     scanf("%d",&n);
//     do{
//         printf("%d\n",i);
//         i++;
//     }while(i<=n);
// }

#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter any number:");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
}