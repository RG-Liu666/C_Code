#include <stdio.h>
int main()
{
    float x, e, f;
    int m, n;
    float a = 0; 
    scanf("%d %d", &m, &n);
    scanf("%f", &x);
    while(scanf("%f %f", &e, &f) != EOF) {
        a = a + e * f;
    }
    float p1 = a * x;
    int t1 = (int)(a / m); 
    float p2 = a - (t1 * n);
    float p3 = a * x;
    int t2 = (int)(p3 / m); 
    p3 = p3 - (t2 * n);
    float ans = p1;
    if (p2 < ans) ans = p2;
    if (p3 < ans) ans = p3;
    printf("%.2f\n", ans);
    return 0;
}