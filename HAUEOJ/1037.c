#include<stdio.h>
int main()
{
    double a,b,s,t,rabbit,turtle;
    scanf("%lf%lf%lf%lf",&a,&b,&s,&t);
    rabbit=s/b+t;
    turtle=s/a;
    if(rabbit>turtle)
    printf("Turtle win");
    else if(rabbit<turtle)
    printf("Rabbit win");
    else
    printf("Tie");
    return 0;
}