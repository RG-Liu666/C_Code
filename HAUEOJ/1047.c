#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    int b;
    scanf("%f",&a);
    if(a<1000&&a>0){
    b=(int)sqrt(a);
    printf("%d\n",b);
    }else{
    printf("invalid data!\n");
    }
    return 0;
}