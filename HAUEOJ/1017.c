#include<stdio.h>
int main()
{
    float R,r,zong;
    scanf("%f%f",&R,&r);
    zong=1.0/(1.0/r+1.0/R);
    printf("%.2f",zong);
    return 0;
}