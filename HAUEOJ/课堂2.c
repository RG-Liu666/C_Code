#include<stdio.h>
int main()
{
	int chicken,rabbit,a,b;
	scanf("%d%d",&a,&b);
	rabbit=(b-2*a)/2;
	chicken=a-rabbit;
	printf("%d %d",chicken,rabbit);
	return 0;
}