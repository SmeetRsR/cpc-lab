#include<stdio.h>
int main (){
    int r,g,b,white,cyan,magenta,yellow,black,max;
    printf("enter r: ");
    scanf("%d",&r);
    printf("enter g: ");
    scanf("%d",&g);
    printf("enter b: ");
    scanf("%d",&b);


if(r>g){
    if(r>b){
     max=r;
    }
    else{
     max=b;
    }
}
else{
    if(g>b){
     max=g;
    }
    else{
     max=b;
    }
}
white=max;
cyan=(white-(r/255))/white;
magenta=(white-(g/255))/white;
yellow=(white-(b/255))/white;
black=1-white;

printf("magenta=%d\n",magenta);
printf("white=%d\n",white);
printf("cyan=%d\n",cyan);
printf("yellow=%d\n",yellow);
printf("black=%d\n",black);
return 0;
}