#include<stdio.h>
int main()
{
    int x,m;
    while(1)
    {
        scanf("%d%d",&x,&m);
        if(x==0&&m==0)
        break;
        printf("%d\n",x*m);
    }
    return 0;
}
