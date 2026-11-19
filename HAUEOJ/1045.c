#include<stdio.h>
int main()
{
    float a,b,c;
    char op;
    scanf("%f%f %c",&a,&b,&op);
    if(op=='+'){
    c=a+b;
    printf("%.2f\n",c);
    }else if(op=='-'){
    c=a-b;
    printf("%.2f\n",c);
    }else if(op=='/'){
    c=a/b;
    printf("%.2f\n",c);
    }else if(op=='*'){
    c=a*b;
    printf("%.2f\n",c);
    }
    return 0;
}