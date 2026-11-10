#include<stdio.h>
int main()
{
    double r,h,s;
    double PI=3.14159;
    scanf("%lf%lf",&r,&h);
    s=2*PI*r*r+2*PI*r*h;
    printf("%.2f",s);
    return 0;
}