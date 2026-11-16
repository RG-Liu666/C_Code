#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  if(1.0*a<b*1.2)
    printf("0\n");
    else if(1.0*a>=1.2*b&&1.0*a<1.5*b)
      printf("6\n");
  else if(1.0*a>=1.5*b)
    printf("12\n");
    return 0;
}