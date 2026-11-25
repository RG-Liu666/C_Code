#include<stdio.h>
int main()
{
    char x,y,z;
    scanf("%c%c%c",&x,&y,&z);
    if(x>=y&&y>=z){
    printf("%c%c%c",z,y,x);
    }else if(x>=z&&z>=y){
    printf("%c%c%c",y,z,x);
    }else if(y>=x&&x>=z){
    printf("%c%c%c",z,x,y);
    }else if(y>=z&&z>=x){
    printf("%c%c%c",x,z,y);
    }else if(z>=y&&y>=x){
    printf("%c%c%c",x,y,z);
    }else if(z>=x&&x>=y){
    printf("%c%c%c",y,x,z);
    }
    return 0;
}