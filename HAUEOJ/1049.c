#include<stdio.h>
int main()
{
    float x,y;
    scanf("(%f,%f)",&x,&y);
    if((x-2)*(x-2)+(y-2)*(y-2)<=1){
    printf("10\n");
    }else if((x+2)*(x+2)+(y-2)*(y-2)<=1){
    printf("10\n");
    }else if((x-2)*(x-2)+(y+2)*(y+2)<=1){
    printf("10\n");
    }else if((x+2)*(x+2)+(y+2)*(y+2)<=1){
    printf("10\n");
    }else{
    printf("0\n");
    }
    return 0;
}