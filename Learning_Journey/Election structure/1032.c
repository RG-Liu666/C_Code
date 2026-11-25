#include<stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    printf("yes\n");
    else
    printf("no\n");
    return 0;
}