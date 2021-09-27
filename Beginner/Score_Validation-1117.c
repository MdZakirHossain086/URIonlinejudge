#include<stdio.h>
int main()
{
    double a,b=0,c=0,s;
    while(1)
    {
        if(b==2)
            break;
        scanf("%lf",&a);
        if(a>=0&&a<=10)
        {
            b++;
            c=c+a;
        }
        else
            printf("nota invalida\n");
    }
    s=c/2.0;
    printf("media = %.2lf\n",s);
    return 0;
}
