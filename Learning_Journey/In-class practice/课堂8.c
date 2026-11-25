#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 1) {
        printf("No\n"); 
    } 
    else if (n == 2) {
        printf("Yes\n"); 
    } 
    else {
        int flag = 1; 
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                flag = 0; 
                break; 
            }
        }
        if (flag == 1) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
        }
    return 0;
}