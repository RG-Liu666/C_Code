#include<stdio.h>
int main()
{
    int a,b,c,d,xiangshu;
    scanf("%d%d%d",&a,&b,&c);
    xiangshu=(b-a)/c+1;
    d=((a+b)*xiangshu)/2;
    printf("%d\n",d);
    return 0;
}