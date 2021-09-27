#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a+b>c||a+b>d||b+c>d||b+c>a||c+d>a||c+d>b||d+a>b||d+a>c)
    {
        printf("S\n");
    }
    else
        printf("N\n");
    return 0;
}
