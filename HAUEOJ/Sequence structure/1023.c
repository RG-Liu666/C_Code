#include <stdio.h>

int main() 
{
    long long int a;
    int b, c, d;
    
    scanf("%lld", &a);
    
    d = (a / 10000) % 100;      
    c = (a / 1000000) % 100;      
    b = (a / 100000000) % 10000;  
    
    printf("%04d-%02d-%02d\n", b, c, d);
    
    return 0;
}