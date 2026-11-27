#include<stdio.h>
int main()
{
    int n,sum=0;
    int i=0;
    scanf("%d",&n);
    while(sum<n){
        i++;
        sum=sum+i;
    }
    printf("%d\n",i);
    return 0;
}