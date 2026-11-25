#include<math.h>
int main()
{
    double a,b,c,y;
    double x1,x2,real,imag;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(fabs(a)<=1e-6){
        printf("This is not a quadratic equation\n");
        return 0;
    }
    y=b*b-4*a*c;
    if(y>1e-6)
    {
        x1=(-b+sqrt(y))/(2*a);
        x2=(-b-sqrt(y))/(2*a);
        printf("%.2f %.2f\n",x1,x2);
    }
    else if(fabs(y)<=1e-6)
    {
        x1=(-b)/(2*a);
        printf("%.2f\n",x1);
    }
    else
    {
        real = (-b)/(2*a);
        imag = sqrt(-y)/(2*a);
        printf("%.2f+%.2fi %.2f-%.2fi\n",real,imag,real,imag);
    }
    return 0;
}