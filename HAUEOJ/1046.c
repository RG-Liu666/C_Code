#include<stdio.h>
int main()
{
    float sales;
    scanf("%f",&sales);
    if(sales<500)
    printf("%.2f\n",sales);
    else if(sales>=500&&sales<1000)
    printf("%.2f\n",sales*0.95);
    else if(sales>=1000&&sales<3000)
    printf("%.2f\n",sales*0.90);
    else if(sales>=3000&&sales<5000)
    printf("%.2f\n",sales*0.85);
    else if(sales>=5000)
    printf("%.2f\n",sales*0.80);
    return 0;
}