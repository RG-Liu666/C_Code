#include<stdio.h>
int main()
{
    int m,n,money;
    scanf("%d%d",&m,&n);
    money=m*(1<<n);
    printf("%d",money);
    return 0;
}