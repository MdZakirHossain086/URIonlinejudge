#include<stdio.h>
int main()
{
    int n,x,y,i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&x,&y);
        if(x==0)
            printf("0.0\n");
        else if(y==0)
            printf("divisao impossivel\n");
        else
            printf("%.1lf\n",x/(y*1.0));

    }
    return 0;
}
