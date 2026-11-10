#include<stdio.h>
int main()
{
    int a,b,s,t,turtle,rabbit;
    scanf("%d%d%d%d",&a,&b,&s,&t);
    turtle=s/a;
    rabbit=s/b+t;
    if(rabbit>turtle)
    printf("Turtle win");
    else if(turtle>rabbit)
    printf("Rabbit win");
    else
    printf("Tie");
    
	return 0;
}