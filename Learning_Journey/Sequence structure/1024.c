#include<stdio.h>
int main()
{
    int n,m,rabbit,chicken;
    scanf("%d%d",&n,&m);
    rabbit=m/2-n;
    chicken=n-rabbit;
    printf("%d %d\n",chicken,rabbit);
    return 0;
}