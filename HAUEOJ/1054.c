#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    switch(x){
        case 'A':
        printf("Apple\n");break;
        case 'B':
        printf("Banana\n");break;
        case 'C':
        printf("Cherry\n");break;
        case 'D':
        printf("Durian\n");break;
        default:
        printf("Mango\n");break;
    }
    return 0;
}