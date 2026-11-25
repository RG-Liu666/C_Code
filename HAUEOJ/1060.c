#include <stdio.h>
int main()
{
    int h, b, c;
    char x;
    scanf("%d %d %c %d", &h, &b, &x, &c);
    for(int i = 1; i <= h; i++) {
        for(int s = 1; s <= b; s++) {
            if(c == 1) {
                printf("%c", x);
            } else {
                if(i == 1 || i == h || s == 1 || s == b) {
                    printf("%c", x);
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}