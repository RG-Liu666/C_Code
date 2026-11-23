#include<stdio.h>
int main()
{
    int e,f,a;
    int b=8;
    int d=0;
    for(int i=1;i<=7;i++){
        scanf("%d %d",&e,&f);
        a=e+f;
        if(a>b){
        b=a;
        d=i;
        }
    }
    if(d>0){
        printf("%d\n",d);
    }
    else{
        printf("0\n");
    }
    return 0;
}