#include<stdio.h>
int main()
{
    int h,r,n;
    double s;
    scanf("%d%d",&h,&r);
    s=3.14*h*r*r;
    n=20000/s;
    if(n*s<20000){
    n=n+1;
    }
    printf("%d",n);
    return 0;
}