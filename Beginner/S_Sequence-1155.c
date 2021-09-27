#include<stdio.h>
int main()
{
    int a;
    double sum=0,d,j=1.0,i;
    for(i=1;i<=100;i++)
    {
        sum=sum+(1/j);
        j++;
    }
    printf("%.2lf\n",sum);
    return 0;
}
