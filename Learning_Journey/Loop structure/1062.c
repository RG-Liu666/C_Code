#include<stdio.h>
int main()
{
    int n;
    double product=1;
    double sum=1.0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        product=i*product;
        sum=sum+1.0/product;
    }
    printf("%.10lf\n",sum);
    return 0;
}