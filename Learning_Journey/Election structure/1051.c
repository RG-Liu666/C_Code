#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<=160&&x>0){
    printf("%d",x*10);
    }else if(x>160){
    printf("%d",(x-160)*30+160*10);
    }
    return 0;
}