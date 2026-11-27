#include<stdio.h>
int main()
{
    int n;
    int sign=1;
    double sum=0.0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i*sign*1.0/(2*i-1);
        sign=-sign;
    }
    printf("%.3f\n",sum);
    return 0;
}