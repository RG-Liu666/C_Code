#include<stdio.h>
int main()
{
    char b;
    scanf("%c",&b);
    if(b<=90&&b>=65){
    printf("upper\n");
    }else if(b>=97&&b<=122){
    printf("lower\n");
    }else if(b>=48&&b<=57){
    printf("digit\n");
    }else
    printf("other\n");
    return 0;
}