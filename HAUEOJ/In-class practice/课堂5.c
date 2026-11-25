#include<stdio.h>
int main()
{
    int a,b,c,d,e,min,hour;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    min=(c*60+d-a*60-b)%60;
    hour=(c*60+d-a*60-b)/60;
    printf("%d小时%d分钟",hour,min);
	return 0;
}