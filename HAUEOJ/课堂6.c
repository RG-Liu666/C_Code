#include<stdio.h>
int main()
{
	int m,n,sum;
	scanf("%d %d",&m,&n);
	for(int i=m;i<=n;i++){
		sum=sum+i;
	}
	printf("%d\n",sum);
	return 0;
}