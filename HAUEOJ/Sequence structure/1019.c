#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    int n,a;
    scanf("%lf%d",&x,&n);                                                                   
    a=(int)(x*pow(10,n)+1e-6)%10;
    printf("%d",a);
    return 0;
}