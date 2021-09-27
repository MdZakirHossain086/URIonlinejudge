#include<stdio.h>
int main()
{
    double a,b,c,t,cr,tr,q,r,pi=3.14159;
    scanf("%lf%lf%lf",&a,&b,&c);
    t=0.5*a*c;
    cr=pi*c*c;
    tr=((a+b)/2)*c;
    q=b*b;
    r=a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",t,cr,tr,q,r);
    return 0;
}
