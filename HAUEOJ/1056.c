#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        double result=log(i);
        printf("%4d%8.4f\n",i,result);
    }
    return 0;
}