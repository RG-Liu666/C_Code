#include<stdio.h>
#include<string.h>
int main()
{
    char s[35];
    long long sum=0;
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<len;i++){
        sum=sum*2+(s[i]-'0');
    }
   printf("%lld\n",sum);
    return 0;
}