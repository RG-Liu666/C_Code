#include<stdio.h>
int main()
{
    double a,b,r;
    int k;
    scanf("%lf%lf",&a,&b);
    k=a/b;
    r=a-k*b;
    printf("%.4f",r);
    return 0;
}