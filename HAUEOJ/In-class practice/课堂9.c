#include<stdio.h>
int main()
{
	int n,sign=1;
	float sum=0.0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum=sum+1.0*sign/(2*i-1);
		sign=-sign;
	}
	printf("%.3f\n",sum);
	return 0;
}