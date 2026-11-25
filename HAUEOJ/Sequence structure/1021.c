#include<stdio.h>
int main()
{
    int n, x, y, r;
    scanf("%d%d%d", &n, &x, &y);
    r = y % x;
    int remain;
    if(r > 0) {
        remain = n - (y / x + 1);
    } else if(r == 0) {
        remain = n - y / x;
    }
    if(remain < 0) {
        remain = 0;
    }
    printf("%d\n", remain);
    return 0;
}