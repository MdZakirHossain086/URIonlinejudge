#include<stdio.h>
int main()
{
    int n;
    double a,b,c,d;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        d=(a*2.0+b*3.0+c*5.0)/10.0;
        printf("%.1lf\n",d);
    }
    return 0;
}
