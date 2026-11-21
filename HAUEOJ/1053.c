#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f%f",&x,&y);
    if(x*x+y*y<4.5*4.5)
    printf("in\n");
    else if(x*x+y*y==4.5*4.5)
    printf("on\n");
    else if(x*x+y*y>4.5*4.5)
    printf("out\n");
    return 0;
}