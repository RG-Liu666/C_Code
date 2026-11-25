#include<stdio.h>
int main()
{
    int a,b,c,d,time,x,y;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    time=c*60-a*60+d-b;
    x=time/60;
    y=time%60;
    printf("%d %d",x,y);
    return 0;
}